/**
 * @file i2c_slave.cpp
 *
 * @author FTDI
 * @date 2015-01-08
 *
 * Copyright © 2011 Future Technology Devices International Limited
 * Company Confidential
 *
 * Rivision History:
 * 1.0 - initial version
 */

//------------------------------------------------------------------------------
#include <windows.h>

#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>

//------------------------------------------------------------------------------
// include FTDI libraries
//
#include "ftd2xx.h"
#include "LibFT4222.h"


std::vector< FT_DEVICE_LIST_INFO_NODE > g_FT4222DevList;

//------------------------------------------------------------------------------
inline std::string DeviceFlagToString(DWORD flags)
{
    std::string msg;
    msg += (flags & 0x1)? "DEVICE_OPEN" : "DEVICE_CLOSED";
    msg += ", ";
    msg += (flags & 0x2)? "High-speed USB" : "Full-speed USB";
    return msg;
}

void ListFtUsbDevices()
{
    FT_STATUS ftStatus = 0;

    DWORD numOfDevices = 0;
    ftStatus = FT_CreateDeviceInfoList(&numOfDevices);

    for(DWORD iDev=0; iDev<numOfDevices; ++iDev)
    {
        FT_DEVICE_LIST_INFO_NODE devInfo;
        memset(&devInfo, 0, sizeof(devInfo));

        ftStatus = FT_GetDeviceInfoDetail(iDev, &devInfo.Flags, &devInfo.Type,
                                        &devInfo.ID, &devInfo.LocId,
                                        devInfo.SerialNumber,
                                        devInfo.Description,
                                        &devInfo.ftHandle);

        if (FT_OK == ftStatus)
        {
            const std::string desc = devInfo.Description;
            if(desc == "FT4222" || desc == "FT4222 A")
            {
                g_FT4222DevList.push_back(devInfo);
            }
        }
    }
}

//------------------------------------------------------------------------------
// main
//------------------------------------------------------------------------------
int main2(int argc, char const *argv[])
{
    ListFtUsbDevices();

    if(g_FT4222DevList.empty()) {
        printf("No FT4222 device is found!\n");
        return 0;
    }

    const FT_DEVICE_LIST_INFO_NODE& devInfo = g_FT4222DevList[0];

    printf("Open Device\n");
    printf("  Flags= 0x%x, (%s)\n", devInfo.Flags, DeviceFlagToString(devInfo.Flags).c_str());
    printf("  Type= 0x%x\n",        devInfo.Type);
    printf("  ID= 0x%x\n",          devInfo.ID);
    printf("  LocId= 0x%x\n",       devInfo.LocId);
    printf("  SerialNumber= %s\n",  devInfo.SerialNumber);
    printf("  Description= %s\n",   devInfo.Description);
    printf("  ftHandle= 0x%x\n",    devInfo.ftHandle);


    FT_HANDLE ftHandle = NULL;

    FT_STATUS ftStatus;
    ftStatus = FT_OpenEx((PVOID)g_FT4222DevList[0].LocId, FT_OPEN_BY_LOCATION, &ftHandle);
    if (FT_OK != ftStatus)
    {
        printf("Open a FT4222 device failed!\n");
        return 0;
    }


    printf("\n\n");
    printf("Init FT4222 as I2C slave\n");
    ftStatus = FT4222_I2CSlave_Init(ftHandle);
    if (FT_OK != ftStatus)
    {
        printf("Init FT4222 as I2C slave device failed!\n");
        return 0;
    }

    // set i2c slave address
    ftStatus = FT4222_I2CSlave_SetAddress(ftHandle, 0x08);
    if (FT_OK != ftStatus)
    {
        printf("Init FT4222 as I2C slave device failed!\n");
        return 0;
    }
    

    // TODO:
    //    Start to work as I2C slave, and read/write data
    //    1. write i2c slave , it will cache the data and wait for i2c master access
    //    1. read i2c slave , it will get data from i2c master . If master didn't send data, 
    //    FT4222_I2CSlave_Write
    //    FT4222_I2CSlave_Read


    uint8 sent_data[] = {0x1A, 0x2B, 0x3C, 0x4D};
    uint16 sizeTransferred = 0;
    uint16 rxSize;

    printf("I2C slave write data... \n");
    
    ftStatus = FT4222_I2CSlave_Write(ftHandle, sent_data, sizeof(sent_data), &sizeTransferred);
    if (FT_OK != ftStatus)
    {
        printf("I2C slave write error\n");
    }

    // Check how much data needs to receive 
    // you can set FT_EVENT_RXCHAR evnt with FT_SetEventNotification to improve the rx performance
    if(FT4222_I2CSlave_GetRxStatus(ftHandle, &rxSize) == FT_OK)
    {
        if(rxSize>0)
        {
            uint8 *pRead_data = (uint8 *)malloc(rxSize) ;          
            printf("I2C slave read data... \n");

            if(FT4222_I2CSlave_Read(ftHandle,pRead_data, rxSize, &sizeTransferred)!= FT_OK)
            {
                printf("I2C slave read error\n");
            }
            free(pRead_data);
        }        
    }
    else
    {
        printf("I2C slave get status error\n");
    }

    printf("UnInitialize FT4222\n");
    FT4222_UnInitialize(ftHandle);

    printf("Close FT device\n");
    FT_Close(ftHandle);
    return 0;
}

#define READ_LENGTH 2048
class InterfaceFT4222
{
public:
    InterfaceFT4222();
    ~InterfaceFT4222();
    bool Connect();
    bool InitialSlaveI2C(uint8_t slaveID);
    bool WriteI2C(uint8_t *data, uint16_t length);
    bool ReadI2C(uint8_t* data, uint16_t *pLength);
    uint8_t readData[READ_LENGTH];

private:
    void ListFtUsbDevices();
    std::vector< FT_DEVICE_LIST_INFO_NODE > mFT4222DevList;
    FT_HANDLE ftHandle = NULL;
};

InterfaceFT4222::InterfaceFT4222()
{
}

InterfaceFT4222::~InterfaceFT4222()
{
}

bool InterfaceFT4222::Connect()
{
    ListFtUsbDevices();

    if (mFT4222DevList.empty()) {
        printf("No FT4222 device is found!\n");
        return 0;
    }

    const FT_DEVICE_LIST_INFO_NODE& devInfo = mFT4222DevList[0];

    printf("Open Device\n");
    printf("  Flags= 0x%x, (%s)\n", devInfo.Flags, DeviceFlagToString(devInfo.Flags).c_str());
    printf("  Type= 0x%x\n", devInfo.Type);
    printf("  ID= 0x%x\n", devInfo.ID);
    printf("  LocId= 0x%x\n", devInfo.LocId);
    printf("  SerialNumber= %s\n", devInfo.SerialNumber);
    printf("  Description= %s\n", devInfo.Description);
    printf("  ftHandle= 0x%x\n", devInfo.ftHandle);


    

    FT_STATUS ftStatus;
    ftStatus = FT_OpenEx((PVOID)mFT4222DevList[0].LocId, FT_OPEN_BY_LOCATION, &ftHandle);
    if (FT_OK != ftStatus)
    {
        printf("Open a FT4222 device failed!\n");
        return false;
    }
    return true;
}

bool InterfaceFT4222::InitialSlaveI2C(uint8_t slaveID)
{
    FT_STATUS ftStatus;
    printf("\n\n");
    printf("Init FT4222 as I2C slave\n");
    ftStatus = FT4222_I2CSlave_Init(ftHandle);
    if (FT_OK != ftStatus)
    {
        printf("Init FT4222 as I2C slave device failed!\n");
        return false;
    }

    // set i2c slave address
    ftStatus = FT4222_I2CSlave_SetAddress(ftHandle, 0x08);
    if (FT_OK != ftStatus)
    {
        printf("Init FT4222 as I2C slave device failed!\n");
        return false;
    }
    return true;
}

bool InterfaceFT4222::WriteI2C(uint8_t* data, uint16_t length)
{
    FT_STATUS ftStatus;
    uint8 *sent_data = data;
    uint16 sizeTransferred = 0;

    printf("I2C slave write data... \n");

    ftStatus = FT4222_I2CSlave_Write(ftHandle, sent_data, length, &sizeTransferred);
    if ((FT_OK != ftStatus) || (length != sizeTransferred) )
    {
        printf("I2C slave write error\n");
        return false;
    }
    return true;
}

bool InterfaceFT4222::ReadI2C(uint8_t* pData, uint16_t* pLength)
{
    uint16 rxSize;
    uint16 sizeTransferred;
    // Check how much data needs to receive 
// you can set FT_EVENT_RXCHAR evnt with FT_SetEventNotification to improve the rx performance
    if (FT4222_I2CSlave_GetRxStatus(ftHandle, &rxSize) == FT_OK)
    {
        if (rxSize > 0)
        {
            uint8_t *pRead_data = (uint8*)malloc(rxSize);
            printf("I2C slave read data... \n");

            if (FT4222_I2CSlave_Read(ftHandle, pRead_data, rxSize, &sizeTransferred) != FT_OK)
            {
                printf("I2C slave read error\n");
            }

            sizeTransferred = (sizeTransferred > READ_LENGTH) ? READ_LENGTH : sizeTransferred;
            for (size_t i = 0; i < sizeTransferred; i++)
            {
                pData[i] = pRead_data[i];
            }
            
            free(pRead_data);
        }
    }

    *pLength = rxSize;
    return true;
}

void InterfaceFT4222::ListFtUsbDevices()
{
    FT_STATUS ftStatus = 0;

    DWORD numOfDevices = 0;
    ftStatus = FT_CreateDeviceInfoList(&numOfDevices);

    for (DWORD iDev = 0; iDev < numOfDevices; ++iDev)
    {
        FT_DEVICE_LIST_INFO_NODE devInfo;
        memset(&devInfo, 0, sizeof(devInfo));

        ftStatus = FT_GetDeviceInfoDetail(iDev, &devInfo.Flags, &devInfo.Type,
            &devInfo.ID, &devInfo.LocId,
            devInfo.SerialNumber,
            devInfo.Description,
            &devInfo.ftHandle);

        if (FT_OK == ftStatus)
        {
            const std::string desc = devInfo.Description;
            if (desc == "FT4222" || desc == "FT4222 A")
            {
                mFT4222DevList.push_back(devInfo);
            }
        }
    }
}


int main(int argc, char const* argv[])
{
    InterfaceFT4222 mInterfaceFT4222;

    if (mInterfaceFT4222.Connect() == false)
    {
        return 0;
    }

    if (mInterfaceFT4222.InitialSlaveI2C(0x08) == false)
    {
        return 0;
    }



    char tmpInput[512];
    while(1)
    {
        printf("command(write/read)");
        gets_s(tmpInput);
        printf("%s\n", tmpInput);

        if (strcmp(tmpInput, "write") == 0)
        {
            // do something
            printf("data");
            gets_s(tmpInput);
            uint16_t wlen = strlen(tmpInput);
            if (mInterfaceFT4222.WriteI2C((uint8_t *)tmpInput, wlen) == false)
            {
                return 0;
            }
        }
        else if (strcmp(tmpInput, "read") == 0)
        {
            uint8_t rData[READ_LENGTH];
            uint16_t rLength = 0;
            // do something else
            if (mInterfaceFT4222.ReadI2C(rData, &rLength) == false)
            {
                return 0;
            }

            for (int i = 0; i < rLength; i++)
            {
                printf("%02X,", rData[i]);
            }
        }
        /* more else if clauses */
        else /* default: */
        {
            break;
        }
    }


    return 0;
}