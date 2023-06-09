/ * + +  
  
 C o p y r i g h t   �   2 0 0 1 - 2 0 2 1   F u t u r e   T e c h n o l o g y   D e v i c e s   I n t e r n a t i o n a l   L i m i t e d  
  
 T H I S   S O F T W A R E   I S   P R O V I D E D   B Y   F U T U R E   T E C H N O L O G Y   D E V I C E S   I N T E R N A T I O N A L   L I M I T E D   " A S   I S "  
 A N D   A N Y   E X P R E S S   O R   I M P L I E D   W A R R A N T I E S ,   I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   T H E   I M P L I E D   W A R R A N T I E S  
 O F   M E R C H A N T A B I L I T Y   A N D   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E   A R E   D I S C L A I M E D .   I N   N O   E V E N T   S H A L L  
 F U T U R E   T E C H N O L O G Y   D E V I C E S   I N T E R N A T I O N A L   L I M I T E D   B E   L I A B L E   F O R   A N Y   D I R E C T ,   I N D I R E C T ,   I N C I D E N T A L ,  
 S P E C I A L ,   E X E M P L A R Y ,   O R   C O N S E Q U E N T I A L   D A M A G E S   ( I N C L U D I N G ,   B U T   N O T   L I M I T E D   T O ,   P R O C U R E M E N T  
 O F   S U B S T I T U T E   G O O D S   O R   S E R V I C E S   L O S S   O F   U S E ,   D A T A ,   O R   P R O F I T S   O R   B U S I N E S S   I N T E R R U P T I O N )  
 H O W E V E R   C A U S E D   A N D   O N   A N Y   T H E O R Y   O F   L I A B I L I T Y ,   W H E T H E R   I N   C O N T R A C T ,   S T R I C T   L I A B I L I T Y ,   O R  
 T O R T   ( I N C L U D I N G   N E G L I G E N C E   O R   O T H E R W I S E )   A R I S I N G   I N   A N Y   W A Y   O U T   O F   T H E   U S E   O F   T H I S   S O F T W A R E ,  
 E V E N   I F   A D V I S E D   O F   T H E   P O S S I B I L I T Y   O F   S U C H   D A M A G E .  
  
 F T D I   D R I V E R S   M A Y   B E   U S E D   O N L Y   I N   C O N J U N C T I O N   W I T H   P R O D U C T S   B A S E D   O N   F T D I   P A R T S .  
  
 F T D I   D R I V E R S   M A Y   B E   D I S T R I B U T E D   I N   A N Y   F O R M   A S   L O N G   A S   L I C E N S E   I N F O R M A T I O N   I S   N O T   M O D I F I E D .  
  
 I F   A   C U S T O M   V E N D O R   I D   A N D / O R   P R O D U C T   I D   O R   D E S C R I P T I O N   S T R I N G   A R E   U S E D ,   I T   I S   T H E  
 R E S P O N S I B I L I T Y   O F   T H E   P R O D U C T   M A N U F A C T U R E R   T O   M A I N T A I N   A N Y   C H A N G E S   A N D   S U B S E Q U E N T   W H Q L  
 R E - C E R T I F I C A T I O N   A S   A   R E S U L T   O F   M A K I N G   T H E S E   C H A N G E S .  
  
  
 M o d u l e   N a m e :  
  
 f t d 2 x x . h  
  
 A b s t r a c t :  
  
 N a t i v e   U S B   d e v i c e   d r i v e r   f o r   F T D I   F T 2 3 2 x ,   F T 2 4 5 x ,   F T 2 2 3 2 x ,   F T 4 2 3 2 x ,   F T 2 2 3 3 H   a n d   F T 4 2 3 3 H   d e v i c e s  
 F T D 2 X X   l i b r a r y   d e f i n i t i o n s  
  
 E n v i r o n m e n t :  
  
 k e r n e l   &   u s e r   m o d e  
  
  
 - - * /  
  
  
 # i f n d e f   F T D 2 X X _ H  
 # d e f i n e   F T D 2 X X _ H  
  
 # i f d e f   _ W I N 3 2  
 / /   C o m p i l i n g   o n   W i n d o w s  
 # i n c l u d e   < w i n d o w s . h >  
  
 / /   T h e   f o l l o w i n g   i f d e f   b l o c k   i s   t h e   s t a n d a r d   w a y   o f   c r e a t i n g   m a c r o s  
 / /   w h i c h   m a k e   e x p o r t i n g   f r o m   a   D L L   s i m p l e r .     A l l   f i l e s   w i t h i n   t h i s   D L L  
 / /   a r e   c o m p i l e d   w i t h   t h e   F T D 2 X X _ E X P O R T S   s y m b o l   d e f i n e d   o n   t h e   c o m m a n d   l i n e .  
 / /   T h i s   s y m b o l   s h o u l d   n o t   b e   d e f i n e d   o n   a n y   p r o j e c t   t h a t   u s e s   t h i s   D L L .  
 / /   T h i s   w a y   a n y   o t h e r   p r o j e c t   w h o s e   s o u r c e   f i l e s   i n c l u d e   t h i s   f i l e   s e e  
 / /   F T D 2 X X _ A P I   f u n c t i o n s   a s   b e i n g   i m p o r t e d   f r o m   a   D L L ,   w h e r e a s   t h i s   D L L  
 / /   s e e s   s y m b o l s   d e f i n e d   w i t h   t h i s   m a c r o   a s   b e i n g   e x p o r t e d .  
  
 # i f d e f   F T D 2 X X _ E X P O R T S  
 # d e f i n e   F T D 2 X X _ A P I   _ _ d e c l s p e c ( d l l e x p o r t )  
 # e l i f   d e f i n e d ( F T D 2 X X _ S T A T I C )  
 / /   A v o i d   d e c o r a t i o n s   w h e n   l i n k i n g   s t a t i c a l l y   t o   D 2 X X .  
 # d e f i n e   F T D 2 X X _ A P I  
 / /   S t a t i c   D 2 X X   d e p e n d s   o n   t h e s e   W i n d o w s   l i b s :  
 # p r a g m a   c o m m e n t ( l i b ,   " s e t u p a p i . l i b " )  
 # p r a g m a   c o m m e n t ( l i b ,   " a d v a p i 3 2 . l i b " )  
 # p r a g m a   c o m m e n t ( l i b ,   " u s e r 3 2 . l i b " )  
 # e l s e  
 # d e f i n e   F T D 2 X X _ A P I   _ _ d e c l s p e c ( d l l i m p o r t )  
 # e n d i f  
  
 # e l s e   / /   _ W I N 3 2  
 / /   C o m p i l i n g   o n   n o n - W i n d o w s   p l a t f o r m .  
 # i n c l u d e   " W i n T y p e s . h "  
 / /   N o   d e c o r a t i o n s   n e e d e d .  
 # d e f i n e   F T D 2 X X _ A P I  
  
 # e n d i f   / /   _ W I N 3 2  
  
 t y p e d e f   P V O I D 	 F T _ H A N D L E ;  
 t y p e d e f   U L O N G 	 F T _ S T A T U S ;  
  
 / /  
 / /   D e v i c e   s t a t u s  
 / /  
 e n u m   {  
 	 F T _ O K ,  
 	 F T _ I N V A L I D _ H A N D L E ,  
 	 F T _ D E V I C E _ N O T _ F O U N D ,  
 	 F T _ D E V I C E _ N O T _ O P E N E D ,  
 	 F T _ I O _ E R R O R ,  
 	 F T _ I N S U F F I C I E N T _ R E S O U R C E S ,  
 	 F T _ I N V A L I D _ P A R A M E T E R ,  
 	 F T _ I N V A L I D _ B A U D _ R A T E ,  
  
 	 F T _ D E V I C E _ N O T _ O P E N E D _ F O R _ E R A S E ,  
 	 F T _ D E V I C E _ N O T _ O P E N E D _ F O R _ W R I T E ,  
 	 F T _ F A I L E D _ T O _ W R I T E _ D E V I C E ,  
 	 F T _ E E P R O M _ R E A D _ F A I L E D ,  
 	 F T _ E E P R O M _ W R I T E _ F A I L E D ,  
 	 F T _ E E P R O M _ E R A S E _ F A I L E D ,  
 	 F T _ E E P R O M _ N O T _ P R E S E N T ,  
 	 F T _ E E P R O M _ N O T _ P R O G R A M M E D ,  
 	 F T _ I N V A L I D _ A R G S ,  
 	 F T _ N O T _ S U P P O R T E D ,  
 	 F T _ O T H E R _ E R R O R ,  
 	 F T _ D E V I C E _ L I S T _ N O T _ R E A D Y ,  
 } ;  
  
  
 # d e f i n e   F T _ S U C C E S S ( s t a t u s )   ( ( s t a t u s )   = =   F T _ O K )  
  
 / /  
 / /   F T _ O p e n E x   F l a g s  
 / /  
  
 # d e f i n e   F T _ O P E N _ B Y _ S E R I A L _ N U M B E R 	 1  
 # d e f i n e   F T _ O P E N _ B Y _ D E S C R I P T I O N 	 	 2  
 # d e f i n e   F T _ O P E N _ B Y _ L O C A T I O N 	 	 	 4  
  
 # d e f i n e   F T _ O P E N _ M A S K   ( F T _ O P E N _ B Y _ S E R I A L _ N U M B E R   |   \  
                                             F T _ O P E N _ B Y _ D E S C R I P T I O N   |   \  
                                             F T _ O P E N _ B Y _ L O C A T I O N )  
  
 / /  
 / /   F T _ L i s t D e v i c e s   F l a g s   ( u s e d   i n   c o n j u n c t i o n   w i t h   F T _ O p e n E x   F l a g s  
 / /  
  
 # d e f i n e   F T _ L I S T _ N U M B E R _ O N L Y 	 	 	 0 x 8 0 0 0 0 0 0 0  
 # d e f i n e   F T _ L I S T _ B Y _ I N D E X 	 	 	 0 x 4 0 0 0 0 0 0 0  
 # d e f i n e   F T _ L I S T _ A L L 	 	 	 	 	 0 x 2 0 0 0 0 0 0 0  
  
 # d e f i n e   F T _ L I S T _ M A S K   ( F T _ L I S T _ N U M B E R _ O N L Y | F T _ L I S T _ B Y _ I N D E X | F T _ L I S T _ A L L )  
  
 / /  
 / /   B a u d   R a t e s  
 / /  
  
 # d e f i n e   F T _ B A U D _ 3 0 0 	 	 	 3 0 0  
 # d e f i n e   F T _ B A U D _ 6 0 0 	 	 	 6 0 0  
 # d e f i n e   F T _ B A U D _ 1 2 0 0 	 	 1 2 0 0  
 # d e f i n e   F T _ B A U D _ 2 4 0 0 	 	 2 4 0 0  
 # d e f i n e   F T _ B A U D _ 4 8 0 0 	 	 4 8 0 0  
 # d e f i n e   F T _ B A U D _ 9 6 0 0 	 	 9 6 0 0  
 # d e f i n e   F T _ B A U D _ 1 4 4 0 0 	 	 1 4 4 0 0  
 # d e f i n e   F T _ B A U D _ 1 9 2 0 0 	 	 1 9 2 0 0  
 # d e f i n e   F T _ B A U D _ 3 8 4 0 0 	 	 3 8 4 0 0  
 # d e f i n e   F T _ B A U D _ 5 7 6 0 0 	 	 5 7 6 0 0  
 # d e f i n e   F T _ B A U D _ 1 1 5 2 0 0 	 	 1 1 5 2 0 0  
 # d e f i n e   F T _ B A U D _ 2 3 0 4 0 0 	 	 2 3 0 4 0 0  
 # d e f i n e   F T _ B A U D _ 4 6 0 8 0 0 	 	 4 6 0 8 0 0  
 # d e f i n e   F T _ B A U D _ 9 2 1 6 0 0 	 	 9 2 1 6 0 0  
  
 / /  
 / /   W o r d   L e n g t h s  
 / /  
  
 # d e f i n e   F T _ B I T S _ 8 	 	 	 ( U C H A R )   8  
 # d e f i n e   F T _ B I T S _ 7 	 	 	 ( U C H A R )   7  
  
 / /  
 / /   S t o p   B i t s  
 / /  
  
 # d e f i n e   F T _ S T O P _ B I T S _ 1 	 	 ( U C H A R )   0  
 # d e f i n e   F T _ S T O P _ B I T S _ 2 	 	 ( U C H A R )   2  
  
 / /  
 / /   P a r i t y  
 / /  
  
 # d e f i n e   F T _ P A R I T Y _ N O N E 	 	 ( U C H A R )   0  
 # d e f i n e   F T _ P A R I T Y _ O D D 	 	 ( U C H A R )   1  
 # d e f i n e   F T _ P A R I T Y _ E V E N 	 	 ( U C H A R )   2  
 # d e f i n e   F T _ P A R I T Y _ M A R K 	 	 ( U C H A R )   3  
 # d e f i n e   F T _ P A R I T Y _ S P A C E 	 	 ( U C H A R )   4  
  
 / /  
 / /   F l o w   C o n t r o l  
 / /  
  
 # d e f i n e   F T _ F L O W _ N O N E 	 	 0 x 0 0 0 0  
 # d e f i n e   F T _ F L O W _ R T S _ C T S 	 	 0 x 0 1 0 0  
 # d e f i n e   F T _ F L O W _ D T R _ D S R 	 	 0 x 0 2 0 0  
 # d e f i n e   F T _ F L O W _ X O N _ X O F F 	 0 x 0 4 0 0  
  
 / /  
 / /   P u r g e   r x   a n d   t x   b u f f e r s  
 / /  
 # d e f i n e   F T _ P U R G E _ R X 	 	 	 1  
 # d e f i n e   F T _ P U R G E _ T X 	 	 	 2  
  
 / /  
 / /   E v e n t s  
 / /  
  
 t y p e d e f   v o i d ( * P F T _ E V E N T _ H A N D L E R ) ( D W O R D ,   D W O R D ) ;  
  
 # d e f i n e   F T _ E V E N T _ R X C H A R 	 	 	 1  
 # d e f i n e   F T _ E V E N T _ M O D E M _ S T A T U S 	 2  
 # d e f i n e   F T _ E V E N T _ L I N E _ S T A T U S 	 4  
  
 / /  
 / /   T i m e o u t s  
 / /  
  
 # d e f i n e   F T _ D E F A U L T _ R X _ T I M E O U T 	 3 0 0  
 # d e f i n e   F T _ D E F A U L T _ T X _ T I M E O U T 	 3 0 0  
  
 / /  
 / /   D e v i c e   t y p e s  
 / /  
  
 t y p e d e f   U L O N G 	 F T _ D E V I C E ;  
  
 e n u m   {  
 	 F T _ D E V I C E _ B M ,  
 	 F T _ D E V I C E _ A M ,  
 	 F T _ D E V I C E _ 1 0 0 A X ,  
 	 F T _ D E V I C E _ U N K N O W N ,  
 	 F T _ D E V I C E _ 2 2 3 2 C ,  
 	 F T _ D E V I C E _ 2 3 2 R ,  
 	 F T _ D E V I C E _ 2 2 3 2 H ,  
 	 F T _ D E V I C E _ 4 2 3 2 H ,  
 	 F T _ D E V I C E _ 2 3 2 H ,  
 	 F T _ D E V I C E _ X _ S E R I E S ,  
 	 F T _ D E V I C E _ 4 2 2 2 H _ 0 ,  
 	 F T _ D E V I C E _ 4 2 2 2 H _ 1 _ 2 ,  
 	 F T _ D E V I C E _ 4 2 2 2 H _ 3 ,  
 	 F T _ D E V I C E _ 4 2 2 2 _ P R O G ,  
 	 F T _ D E V I C E _ 9 0 0 ,  
 	 F T _ D E V I C E _ 9 3 0 ,  
 	 F T _ D E V I C E _ U M F T P D 3 A ,  
 	 F T _ D E V I C E _ 2 2 3 3 H P ,  
 	 F T _ D E V I C E _ 4 2 3 3 H P ,  
 	 F T _ D E V I C E _ 2 2 3 2 H P ,  
 	 F T _ D E V I C E _ 4 2 3 2 H P ,  
 	 F T _ D E V I C E _ 2 3 3 H P ,  
 	 F T _ D E V I C E _ 2 3 2 H P ,  
 	 F T _ D E V I C E _ 2 2 3 2 H A ,  
 	 F T _ D E V I C E _ 4 2 3 2 H A ,  
 	 F T _ D E V I C E _ 2 3 2 R N ,  
 } ;  
  
 / /  
 / /   B i t   M o d e s  
 / /  
  
 # d e f i n e   F T _ B I T M O D E _ R E S E T 	 	 	 	 	 0 x 0 0  
 # d e f i n e   F T _ B I T M O D E _ A S Y N C _ B I T B A N G 	 	 	 0 x 0 1  
 # d e f i n e   F T _ B I T M O D E _ M P S S E 	 	 	 	 	 0 x 0 2  
 # d e f i n e   F T _ B I T M O D E _ S Y N C _ B I T B A N G 	 	 	 	 0 x 0 4  
 # d e f i n e   F T _ B I T M O D E _ M C U _ H O S T 	 	 	 	 	 0 x 0 8  
 # d e f i n e   F T _ B I T M O D E _ F A S T _ S E R I A L 	 	 	 	 0 x 1 0  
 # d e f i n e   F T _ B I T M O D E _ C B U S _ B I T B A N G 	 	 	 	 0 x 2 0  
 # d e f i n e   F T _ B I T M O D E _ S Y N C _ F I F O 	 	 	 	 0 x 4 0  
  
 / /  
 / /   F T 2 3 2 R   C B U S   O p t i o n s   E E P R O M   v a l u e s  
 / /  
  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ T X D E N 	 	 	 	 	 0 x 0 0 	 / / 	 T x   D a t a   E n a b l e  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ P W R O N 	 	 	 	 	 0 x 0 1 	 / / 	 P o w e r   O n  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ R X L E D 	 	 	 	 	 0 x 0 2 	 / / 	 R x   L E D  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ T X L E D 	 	 	 	 	 0 x 0 3 	 / / 	 T x   L E D  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ T X R X L E D 	 	 	 	 0 x 0 4 	 / / 	 T x   a n d   R x   L E D  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ S L E E P 	 	 	 	 	 0 x 0 5 	 / / 	 S l e e p  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ C L K 4 8 	 	 	 	 	 0 x 0 6 	 / / 	 4 8 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ C L K 2 4 	 	 	 	 	 0 x 0 7 	 / / 	 2 4 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ C L K 1 2 	 	 	 	 	 0 x 0 8 	 / / 	 1 2 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ C L K 6 	 	 	 	 	 0 x 0 9 	 / / 	 6 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ I O M O D E 	 	 	 	 	 0 x 0 A 	 / / 	 I O   M o d e   f o r   C B U S   b i t - b a n g  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ B I T B A N G _ W R 	 	 	 	 0 x 0 B 	 / / 	 B i t - b a n g   w r i t e   s t r o b e  
 # d e f i n e   F T _ 2 3 2 R _ C B U S _ B I T B A N G _ R D 	 	 	 	 0 x 0 C 	 / / 	 B i t - b a n g   r e a d   s t r o b e  
  
 / /  
 / /   F T 2 3 2 H   C B U S   O p t i o n s   E E P R O M   v a l u e s  
 / /  
  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ T R I S T A T E 	 	 	 	 0 x 0 0 	 / / 	 T r i s t a t e  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ T X L E D 	 	 	 	 	 0 x 0 1 	 / / 	 T x   L E D  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ R X L E D 	 	 	 	 	 0 x 0 2 	 / / 	 R x   L E D  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ T X R X L E D 	 	 	 	 0 x 0 3 	 / / 	 T x   a n d   R x   L E D  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ P W R E N 	 	 	 	 	 0 x 0 4 	 / / 	 P o w e r   E n a b l e  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ S L E E P 	 	 	 	 	 0 x 0 5 	 / / 	 S l e e p  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ D R I V E _ 0 	 	 	 	 0 x 0 6 	 / / 	 D r i v e   p i n   t o   l o g i c   0  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ D R I V E _ 1 	 	 	 	 0 x 0 7 	 / / 	 D r i v e   p i n   t o   l o g i c   1  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ I O M O D E 	 	 	 	 	 0 x 0 8 	 / / 	 I O   M o d e   f o r   C B U S   b i t - b a n g  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ T X D E N 	 	 	 	 	 0 x 0 9 	 / / 	 T x   D a t a   E n a b l e  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ C L K 3 0 	 	 	 	 	 0 x 0 A 	 / / 	 3 0 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ C L K 1 5 	 	 	 	 	 0 x 0 B 	 / / 	 1 5 M H z   c l o c k  
 # d e f i n e   F T _ 2 3 2 H _ C B U S _ C L K 7 _ 5 	 	 	 	 	 0 x 0 C 	 / / 	 7 . 5 M H z   c l o c k  
  
 / /  
 / /   F T   X   S e r i e s   C B U S   O p t i o n s   E E P R O M   v a l u e s  
 / /  
  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ T R I S T A T E 	 	 	 0 x 0 0 	 / / 	 T r i s t a t e  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ T X L E D 	 	 	 	 0 x 0 1 	 / / 	 T x   L E D  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ R X L E D 	 	 	 	 0 x 0 2 	 / / 	 R x   L E D  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ T X R X L E D 	 	 	 0 x 0 3 	 / / 	 T x   a n d   R x   L E D  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ P W R E N 	 	 	 	 0 x 0 4 	 / / 	 P o w e r   E n a b l e  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ S L E E P 	 	 	 	 0 x 0 5 	 / / 	 S l e e p  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ D R I V E _ 0 	 	 	 0 x 0 6 	 / / 	 D r i v e   p i n   t o   l o g i c   0  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ D R I V E _ 1 	 	 	 0 x 0 7 	 / / 	 D r i v e   p i n   t o   l o g i c   1  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ I O M O D E 	 	 	 	 0 x 0 8 	 / / 	 I O   M o d e   f o r   C B U S   b i t - b a n g  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ T X D E N 	 	 	 	 0 x 0 9 	 / / 	 T x   D a t a   E n a b l e  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ C L K 2 4 	 	 	 	 0 x 0 A 	 / / 	 2 4 M H z   c l o c k  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ C L K 1 2 	 	 	 	 0 x 0 B 	 / / 	 1 2 M H z   c l o c k  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ C L K 6 	 	 	 	 0 x 0 C 	 / / 	 6 M H z   c l o c k  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ B C D _ C H A R G E R 	 	 0 x 0 D 	 / / 	 B a t t e r y   c h a r g e r   d e t e c t e d  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ B C D _ C H A R G E R _ N 	 	 0 x 0 E 	 / / 	 B a t t e r y   c h a r g e r   d e t e c t e d   i n v e r t e d  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ I 2 C _ T X E 	 	 	 0 x 0 F 	 / / 	 I 2 C   T x   e m p t y  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ I 2 C _ R X F 	 	 	 0 x 1 0 	 / / 	 I 2 C   R x   f u l l  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ V B U S _ S E N S E 	 	 	 0 x 1 1 	 / / 	 D e t e c t   V B U S  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ B I T B A N G _ W R 	 	 	 0 x 1 2 	 / / 	 B i t - b a n g   w r i t e   s t r o b e  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ B I T B A N G _ R D 	 	 	 0 x 1 3 	 / / 	 B i t - b a n g   r e a d   s t r o b e  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ T I M E S T A M P 	 	 	 0 x 1 4 	 / / 	 T o g g l e   o u t p u t   w h e n   a   U S B   S O F   t o k e n   i s   r e c e i v e d  
 # d e f i n e   F T _ X _ S E R I E S _ C B U S _ K E E P _ A W A K E 	 	 	 0 x 1 5 	 / / 	  
  
  
 / /   D r i v e r   t y p e s  
 # d e f i n e   F T _ D R I V E R _ T Y P E _ D 2 X X 	 	 0  
 # d e f i n e   F T _ D R I V E R _ T Y P E _ V C P 	 	 1  
  
  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n   " C "   {  
 # e n d i f  
  
  
 # i f d e f   F T D 2 X X _ S T A T I C  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ I n i t i a l i s e (  
 	 	 v o i d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 v o i d   W I N A P I   F T _ F i n a l i s e (  
 	 	 v o i d  
 	 	 ) ;  
 # e n d i f   / /   F T D 2 X X _ S T A T I C  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ O p e n (  
 	 	 i n t   d e v i c e N u m b e r ,  
 	 	 F T _ H A N D L E   * p H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ O p e n E x (  
 	 	 P V O I D   p A r g 1 ,  
 	 	 D W O R D   F l a g s ,  
 	 	 F T _ H A N D L E   * p H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ L i s t D e v i c e s (  
 	 	 P V O I D   p A r g 1 ,  
 	 	 P V O I D   p A r g 2 ,  
 	 	 D W O R D   F l a g s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C l o s e (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e a d (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P V O I D   l p B u f f e r ,  
 	 	 D W O R D   d w B y t e s T o R e a d ,  
 	 	 L P D W O R D   l p B y t e s R e t u r n e d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ W r i t e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P V O I D   l p B u f f e r ,  
 	 	 D W O R D   d w B y t e s T o W r i t e ,  
 	 	 L P D W O R D   l p B y t e s W r i t t e n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ I o C t l (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w I o C o n t r o l C o d e ,  
 	 	 L P V O I D   l p I n B u f ,  
 	 	 D W O R D   n I n B u f S i z e ,  
 	 	 L P V O I D   l p O u t B u f ,  
 	 	 D W O R D   n O u t B u f S i z e ,  
 	 	 L P D W O R D   l p B y t e s R e t u r n e d ,  
 	 	 L P O V E R L A P P E D   l p O v e r l a p p e d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t B a u d R a t e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   B a u d R a t e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t D i v i s o r (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U S H O R T   D i v i s o r  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t D a t a C h a r a c t e r i s t i c s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   W o r d L e n g t h ,  
 	 	 U C H A R   S t o p B i t s ,  
 	 	 U C H A R   P a r i t y  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t F l o w C o n t r o l (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U S H O R T   F l o w C o n t r o l ,  
 	 	 U C H A R   X o n C h a r ,  
 	 	 U C H A R   X o f f C h a r  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e s e t D e v i c e (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t D t r (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C l r D t r (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t R t s (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C l r R t s (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t M o d e m S t a t u s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   * p M o d e m S t a t u s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t C h a r s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   E v e n t C h a r ,  
 	 	 U C H A R   E v e n t C h a r E n a b l e d ,  
 	 	 U C H A R   E r r o r C h a r ,  
 	 	 U C H A R   E r r o r C h a r E n a b l e d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ P u r g e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t T i m e o u t s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   R e a d T i m e o u t ,  
 	 	 U L O N G   W r i t e T i m e o u t  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t Q u e u e S t a t u s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   * d w R x B y t e s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t E v e n t N o t i f i c a t i o n (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   M a s k ,  
 	 	 P V O I D   P a r a m  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t S t a t u s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   * d w R x B y t e s ,  
 	 	 D W O R D   * d w T x B y t e s ,  
 	 	 D W O R D   * d w E v e n t D W o r d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t B r e a k O n (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t B r e a k O f f (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t W a i t M a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ W a i t O n M a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   * M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t E v e n t S t a t u s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   * d w E v e n t D W o r d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e a d E E (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w W o r d O f f s e t ,  
 	 	 L P W O R D   l p w V a l u e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ W r i t e E E (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w W o r d O f f s e t ,  
 	 	 W O R D   w V a l u e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E r a s e E E (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 / /  
 	 / /   s t r u c t u r e   t o   h o l d   p r o g r a m   d a t a   f o r   F T _ E E _ P r o g r a m ,   F T _ E E _ P r o g r a m E x ,   F T _ E E _ R e a d    
 	 / /   a n d   F T _ E E _ R e a d E x   f u n c t i o n s  
 	 / /  
 	 t y p e d e f   s t r u c t   f t _ p r o g r a m _ d a t a   {  
  
 	 	 D W O R D   S i g n a t u r e 1 ; 	 	 	 / /   H e a d e r   -   m u s t   b e   0 x 0 0 0 0 0 0 0 0    
 	 	 D W O R D   S i g n a t u r e 2 ; 	 	 	 / /   H e a d e r   -   m u s t   b e   0 x f f f f f f f f  
 	 	 D W O R D   V e r s i o n ; 	 	 	 	 / /   H e a d e r   -   F T _ P R O G R A M _ D A T A   v e r s i o n  
 	 	 / / 	 	 	 0   =   o r i g i n a l  
 	 	 / / 	 	 	 1   =   F T 2 2 3 2   e x t e n s i o n s  
 	 	 / / 	 	 	 2   =   F T 2 3 2 R   e x t e n s i o n s  
 	 	 / / 	 	 	 3   =   F T 2 2 3 2 H   e x t e n s i o n s  
 	 	 / / 	 	 	 4   =   F T 4 2 3 2 H   e x t e n s i o n s  
 	 	 / / 	 	 	 5   =   F T 2 3 2 H   e x t e n s i o n s  
  
 	 	 W O R D   V e n d o r I d ; 	 	 	 	 / /   0 x 0 4 0 3  
 	 	 W O R D   P r o d u c t I d ; 	 	 	 	 / /   0 x 6 0 0 1  
 	 	 c h a r   * M a n u f a c t u r e r ; 	 	 	 / /   " F T D I "  
 	 	 c h a r   * M a n u f a c t u r e r I d ; 	 	 / /   " F T "  
 	 	 c h a r   * D e s c r i p t i o n ; 	 	 	 / /   " U S B   H S   S e r i a l   C o n v e r t e r "  
 	 	 c h a r   * S e r i a l N u m b e r ; 	 	 	 / /   " F T 0 0 0 0 0 1 "   i f   f i x e d ,   o r   N U L L  
 	 	 W O R D   M a x P o w e r ; 	 	 	 	 / /   0   <   M a x P o w e r   < =   5 0 0  
 	 	 W O R D   P n P ; 	 	 	 	 	 / /   0   =   d i s a b l e d ,   1   =   e n a b l e d  
 	 	 W O R D   S e l f P o w e r e d ; 	 	 	 / /   0   =   b u s   p o w e r e d ,   1   =   s e l f   p o w e r e d  
 	 	 W O R D   R e m o t e W a k e u p ; 	 	 	 / /   0   =   n o t   c a p a b l e ,   1   =   c a p a b l e  
 	 	 / /  
 	 	 / /   R e v 4   ( F T 2 3 2 B )   e x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   R e v 4 ; 	 	 	 	 	 / /   n o n - z e r o   i f   R e v 4   c h i p ,   z e r o   o t h e r w i s e  
 	 	 U C H A R   I s o I n ; 	 	 	 	 / /   n o n - z e r o   i f   i n   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   I s o O u t ; 	 	 	 	 / /   n o n - z e r o   i f   o u t   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   P u l l D o w n E n a b l e ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e ; 	 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   U S B V e r s i o n E n a b l e ; 	 	 / /   n o n - z e r o   i f   c h i p   u s e s   U S B V e r s i o n  
 	 	 W O R D   U S B V e r s i o n ; 	 	 	 / /   B C D   ( 0 x 0 2 0 0   = >   U S B 2 )  
 	 	 / /  
 	 	 / /   R e v   5   ( F T 2 2 3 2 )   e x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   R e v 5 ; 	 	 	 	 	 / /   n o n - z e r o   i f   R e v 5   c h i p ,   z e r o   o t h e r w i s e  
 	 	 U C H A R   I s o I n A ; 	 	 	 	 / /   n o n - z e r o   i f   i n   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   I s o I n B ; 	 	 	 	 / /   n o n - z e r o   i f   i n   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   I s o O u t A ; 	 	 	 	 / /   n o n - z e r o   i f   o u t   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   I s o O u t B ; 	 	 	 	 / /   n o n - z e r o   i f   o u t   e n d p o i n t   i s   i s o c h r o n o u s  
 	 	 U C H A R   P u l l D o w n E n a b l e 5 ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e 5 ; 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   U S B V e r s i o n E n a b l e 5 ; 	 / /   n o n - z e r o   i f   c h i p   u s e s   U S B V e r s i o n  
 	 	 W O R D   U S B V e r s i o n 5 ; 	 	 	 / /   B C D   ( 0 x 0 2 0 0   = >   U S B 2 )  
 	 	 U C H A R   A I s H i g h C u r r e n t ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   h i g h   c u r r e n t  
 	 	 U C H A R   B I s H i g h C u r r e n t ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   h i g h   c u r r e n t  
 	 	 U C H A R   I F A I s F i f o ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I F A I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I F A I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   A I s V C P ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   I F B I s F i f o ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I F B I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I F B I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   B I s V C P ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 / /  
 	 	 / /   R e v   6   ( F T 2 3 2 R )   e x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   U s e E x t O s c ; 	 	 	 / /   U s e   E x t e r n a l   O s c i l l a t o r  
 	 	 U C H A R   H i g h D r i v e I O s ; 	 	 	 / /   H i g h   D r i v e   I / O s  
 	 	 U C H A R   E n d p o i n t S i z e ; 	 	 	 / /   E n d p o i n t   s i z e  
 	 	 U C H A R   P u l l D o w n E n a b l e R ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e R ; 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   I n v e r t T X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   T X D  
 	 	 U C H A R   I n v e r t R X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R X D  
 	 	 U C H A R   I n v e r t R T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R T S  
 	 	 U C H A R   I n v e r t C T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   C T S  
 	 	 U C H A R   I n v e r t D T R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D T R  
 	 	 U C H A R   I n v e r t D S R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D S R  
 	 	 U C H A R   I n v e r t D C D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D C D  
 	 	 U C H A R   I n v e r t R I ; 	 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R I  
 	 	 U C H A R   C b u s 0 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 1 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 2 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 3 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 4 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   R I s D 2 X X ; 	 	 	 	 / /   n o n - z e r o   i f   u s i n g   D 2 X X   d r i v e r  
 	 	 / /  
 	 	 / /   R e v   7   ( F T 2 2 3 2 H )   E x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   P u l l D o w n E n a b l e 7 ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e 7 ; 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   A L S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A L   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A L S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A L   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A L D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A H S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A H   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A H S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A H   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A H D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B L S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B L   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B L S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B L   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B L D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B H S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B H   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B H S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B H   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B H D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   I F A I s F i f o 7 ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I F A I s F i f o T a r 7 ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I F A I s F a s t S e r 7 ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   A I s V C P 7 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   I F B I s F i f o 7 ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I F B I s F i f o T a r 7 ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I F B I s F a s t S e r 7 ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   B I s V C P 7 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   P o w e r S a v e E n a b l e ; 	 	 / /   n o n - z e r o   i f   u s i n g   B C B U S 7   t o   s a v e   p o w e r   f o r   s e l f - p o w e r e d   d e s i g n s  
 	 	 / /  
 	 	 / /   R e v   8   ( F T 4 2 3 2 H )   E x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   P u l l D o w n E n a b l e 8 ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e 8 ; 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   A S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   C S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   C   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   C S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   C   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   C D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   D S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   D   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   D S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   D   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   D D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   A   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   B R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   B   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   C R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   C   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   D R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   D   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   A I s V C P 8 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   B I s V C P 8 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   C I s V C P 8 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   D I s V C P 8 ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 / /  
 	 	 / /   R e v   9   ( F T 2 3 2 H )   E x t e n s i o n s  
 	 	 / /  
 	 	 U C H A R   P u l l D o w n E n a b l e H ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   e n a b l e d  
 	 	 U C H A R   S e r N u m E n a b l e H ; 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 U C H A R   A C S l o w S l e w H ; 	 	 	 / /   n o n - z e r o   i f   A C   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A C S c h m i t t I n p u t H ; 	 	 / /   n o n - z e r o   i f   A C   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A C D r i v e C u r r e n t H ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A D S l o w S l e w H ; 	 	 	 / /   n o n - z e r o   i f   A D   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A D S c h m i t t I n p u t H ; 	 	 / /   n o n - z e r o   i f   A D   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A D D r i v e C u r r e n t H ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   C b u s 0 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 1 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 2 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 3 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 4 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 5 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 6 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 7 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 8 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 9 H ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   I s F i f o H ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I s F i f o T a r H ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I s F a s t S e r H ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   I s F T 1 2 4 8 H ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F T 1 2 4 8  
 	 	 U C H A R   F T 1 2 4 8 C p o l H ; 	 	 	 / /   F T 1 2 4 8   c l o c k   p o l a r i t y   -   c l o c k   i d l e   h i g h   ( 1 )   o r   c l o c k   i d l e   l o w   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 L s b H ; 	 	 	 / /   F T 1 2 4 8   d a t a   i s   L S B   ( 1 )   o r   M S B   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 F l o w C o n t r o l H ; 	 / /   F T 1 2 4 8   f l o w   c o n t r o l   e n a b l e  
 	 	 U C H A R   I s V C P H ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   P o w e r S a v e E n a b l e H ; 	 	 / /   n o n - z e r o   i f   u s i n g   A C B U S 7   t o   s a v e   p o w e r   f o r   s e l f - p o w e r e d   d e s i g n s  
  
 	 }   F T _ P R O G R A M _ D A T A ,   * P F T _ P R O G R A M _ D A T A ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ P r o g r a m (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P F T _ P R O G R A M _ D A T A   p D a t a  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ P r o g r a m E x (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P F T _ P R O G R A M _ D A T A   p D a t a ,  
 	 	 c h a r   * M a n u f a c t u r e r ,  
 	 	 c h a r   * M a n u f a c t u r e r I d ,  
 	 	 c h a r   * D e s c r i p t i o n ,  
 	 	 c h a r   * S e r i a l N u m b e r  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ R e a d (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P F T _ P R O G R A M _ D A T A   p D a t a  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ R e a d E x (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P F T _ P R O G R A M _ D A T A   p D a t a ,  
 	 	 c h a r   * M a n u f a c t u r e r ,  
 	 	 c h a r   * M a n u f a c t u r e r I d ,  
 	 	 c h a r   * D e s c r i p t i o n ,  
 	 	 c h a r   * S e r i a l N u m b e r  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ U A S i z e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w S i z e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ U A W r i t e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P U C H A R   p u c D a t a ,  
 	 	 D W O R D   d w D a t a L e n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ U A R e a d (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P U C H A R   p u c D a t a ,  
 	 	 D W O R D   d w D a t a L e n ,  
 	 	 L P D W O R D   l p d w B y t e s R e a d  
 	 	 ) ;  
  
  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ h e a d e r   {  
 	 	 F T _ D E V I C E   d e v i c e T y p e ; 	 	 / /   F T x x x x   d e v i c e   t y p e   t o   b e   p r o g r a m m e d  
 	 	 / /   D e v i c e   d e s c r i p t o r   o p t i o n s  
 	 	 W O R D   V e n d o r I d ; 	 	 	 	 / /   0 x 0 4 0 3  
 	 	 W O R D   P r o d u c t I d ; 	 	 	 	 / /   0 x 6 0 0 1  
 	 	 U C H A R   S e r N u m E n a b l e ; 	 	 	 / /   n o n - z e r o   i f   s e r i a l   n u m b e r   t o   b e   u s e d  
 	 	 / /   C o n f i g   d e s c r i p t o r   o p t i o n s  
 	 	 W O R D   M a x P o w e r ; 	 	 	 	 / /   0   <   M a x P o w e r   < =   5 0 0  
 	 	 U C H A R   S e l f P o w e r e d ; 	 	 	 / /   0   =   b u s   p o w e r e d ,   1   =   s e l f   p o w e r e d  
 	 	 U C H A R   R e m o t e W a k e u p ; 	 	 	 / /   0   =   n o t   c a p a b l e ,   1   =   c a p a b l e  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   P u l l D o w n E n a b l e ; 	 	 / /   n o n - z e r o   i f   p u l l   d o w n   i n   s u s p e n d   e n a b l e d  
 	 }   F T _ E E P R O M _ H E A D E R ,   * P F T _ E E P R O M _ H E A D E R ;  
  
  
 	 / /   F T 2 3 2 B   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 2 3 2 b   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 }   F T _ E E P R O M _ 2 3 2 B ,   * P F T _ E E P R O M _ 2 3 2 B ;  
  
  
 	 / /   F T 2 2 3 2   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 2 2 3 2   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   A I s H i g h C u r r e n t ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   h i g h   c u r r e n t  
 	 	 U C H A R   B I s H i g h C u r r e n t ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   h i g h   c u r r e n t  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   A I s F i f o ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   A I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   A I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   B I s F i f o ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   B I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   B I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   A D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   B D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 }   F T _ E E P R O M _ 2 2 3 2 ,   * P F T _ E E P R O M _ 2 2 3 2 ;  
  
  
 	 / /   F T 2 3 2 R   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 2 3 2 r   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   I s H i g h C u r r e n t ; 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   h i g h   c u r r e n t  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   U s e E x t O s c ; 	 	 	 / /   U s e   E x t e r n a l   O s c i l l a t o r  
 	 	 U C H A R   I n v e r t T X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   T X D  
 	 	 U C H A R   I n v e r t R X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R X D  
 	 	 U C H A R   I n v e r t R T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R T S  
 	 	 U C H A R   I n v e r t C T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   C T S  
 	 	 U C H A R   I n v e r t D T R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D T R  
 	 	 U C H A R   I n v e r t D S R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D S R  
 	 	 U C H A R   I n v e r t D C D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D C D  
 	 	 U C H A R   I n v e r t R I ; 	 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R I  
 	 	 U C H A R   C b u s 0 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 1 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 2 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 3 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 4 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   u s i n g   D 2 X X   d r i v e r  
 	 }   F T _ E E P R O M _ 2 3 2 R ,   * P F T _ E E P R O M _ 2 3 2 R ;  
  
  
 	 / /   F T 2 2 3 2 H   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 2 2 3 2 h   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   A L S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A L   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A L S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A L   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A L D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A H S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A H   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A H S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A H   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A H D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B L S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B L   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B L S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B L   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B L D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B H S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B H   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B H S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B H   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B H D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   A I s F i f o ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   A I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   A I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   B I s F i f o ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   B I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   B I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   P o w e r S a v e E n a b l e ; 	 	 / /   n o n - z e r o   i f   u s i n g   B C B U S 7   t o   s a v e   p o w e r   f o r   s e l f - p o w e r e d   d e s i g n s  
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   A D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   B D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 }   F T _ E E P R O M _ 2 2 3 2 H ,   * P F T _ E E P R O M _ 2 2 3 2 H ;  
  
  
 	 / /   F T 4 2 3 2 H   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 4 2 3 2 h   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   A S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   B S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   B   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   B S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   B   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   B D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   C S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   C   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   C S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   C   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   C D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   D S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   D   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   D S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   D   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   D D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   A R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   A   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   B R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   B   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   C R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   C   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 U C H A R   D R I I s T X D E N ; 	 	 	 / /   n o n - z e r o   i f   p o r t   D   u s e s   R I   a s   R S 4 8 5   T X D E N  
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   A D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   B D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   C D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 	 U C H A R   D D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 }   F T _ E E P R O M _ 4 2 3 2 H ,   * P F T _ E E P R O M _ 4 2 3 2 H ;  
  
  
 	 / /   F T 2 3 2 H   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 2 3 2 h   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   A C S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A C   b u s   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A C S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A C   b u s   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A C D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A D S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A D   b u s   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A D S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A D   b u s   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A D D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 / /   C B U S   o p t i o n s  
 	 	 U C H A R   C b u s 0 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 1 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 2 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 3 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 4 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 5 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 6 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 7 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 8 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 9 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 / /   F T 1 2 4 8   o p t i o n s  
 	 	 U C H A R   F T 1 2 4 8 C p o l ; 	 	 	 / /   F T 1 2 4 8   c l o c k   p o l a r i t y   -   c l o c k   i d l e   h i g h   ( 1 )   o r   c l o c k   i d l e   l o w   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 L s b ; 	 	 	 / /   F T 1 2 4 8   d a t a   i s   L S B   ( 1 )   o r   M S B   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 F l o w C o n t r o l ; 	 / /   F T 1 2 4 8   f l o w   c o n t r o l   e n a b l e  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   I s F i f o ; 	 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O  
 	 	 U C H A R   I s F i f o T a r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   2 4 5   F I F O   C P U   t a r g e t  
 	 	 U C H A R   I s F a s t S e r ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F a s t   s e r i a l  
 	 	 U C H A R   I s F T 1 2 4 8 ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   F T 1 2 4 8  
 	 	 U C H A R   P o w e r S a v e E n a b l e ; 	 	 / /    
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 }   F T _ E E P R O M _ 2 3 2 H ,   * P F T _ E E P R O M _ 2 3 2 H ;  
  
  
 	 / /   F T   X   S e r i e s   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ x _ s e r i e s   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 / /   D r i v e   o p t i o n s  
 	 	 U C H A R   A C S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A C   b u s   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A C S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A C   b u s   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A C D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   A D S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   A D   b u s   p i n s   h a v e   s l o w   s l e w  
 	 	 U C H A R   A D S c h m i t t I n p u t ; 	 	 / /   n o n - z e r o   i f   A D   b u s   p i n s   a r e   S c h m i t t   i n p u t  
 	 	 U C H A R   A D D r i v e C u r r e n t ; 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 / /   C B U S   o p t i o n s  
 	 	 U C H A R   C b u s 0 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 1 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 2 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 3 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 4 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 5 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 U C H A R   C b u s 6 ; 	 	 	 	 / /   C b u s   M u x   c o n t r o l  
 	 	 / /   U A R T   s i g n a l   o p t i o n s  
 	 	 U C H A R   I n v e r t T X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   T X D  
 	 	 U C H A R   I n v e r t R X D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R X D  
 	 	 U C H A R   I n v e r t R T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R T S  
 	 	 U C H A R   I n v e r t C T S ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   C T S  
 	 	 U C H A R   I n v e r t D T R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D T R  
 	 	 U C H A R   I n v e r t D S R ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D S R  
 	 	 U C H A R   I n v e r t D C D ; 	 	 	 / /   n o n - z e r o   i f   i n v e r t   D C D  
 	 	 U C H A R   I n v e r t R I ; 	 	 	 	 / /   n o n - z e r o   i f   i n v e r t   R I  
 	 	 / /   B a t t e r y   C h a r g e   D e t e c t   o p t i o n s  
 	 	 U C H A R   B C D E n a b l e ; 	 	 	 / /   E n a b l e   B a t t e r y   C h a r g e r   D e t e c t i o n  
 	 	 U C H A R   B C D F o r c e C b u s P W R E N ; 	 / /   a s s e r t s   t h e   p o w e r   e n a b l e   s i g n a l   o n   C B U S   w h e n   c h a r g i n g   p o r t   d e t e c t e d  
 	 	 U C H A R   B C D D i s a b l e S l e e p ; 	 	 / /   f o r c e s   t h e   d e v i c e   n e v e r   t o   g o   i n t o   s l e e p   m o d e  
 	 	 / /   I 2 C   o p t i o n s  
 	 	 W O R D   I 2 C S l a v e A d d r e s s ; 	 	 / /   I 2 C   s l a v e   d e v i c e   a d d r e s s  
 	 	 D W O R D   I 2 C D e v i c e I d ; 	 	 	 / /   I 2 C   d e v i c e   I D  
 	 	 U C H A R   I 2 C D i s a b l e S c h m i t t ; 	 / /   D i s a b l e   I 2 C   S c h m i t t   t r i g g e r  
 	 	 / /   F T 1 2 4 8   o p t i o n s  
 	 	 U C H A R   F T 1 2 4 8 C p o l ; 	 	 	 / /   F T 1 2 4 8   c l o c k   p o l a r i t y   -   c l o c k   i d l e   h i g h   ( 1 )   o r   c l o c k   i d l e   l o w   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 L s b ; 	 	 	 / /   F T 1 2 4 8   d a t a   i s   L S B   ( 1 )   o r   M S B   ( 0 )  
 	 	 U C H A R   F T 1 2 4 8 F l o w C o n t r o l ; 	 / /   F T 1 2 4 8   f l o w   c o n t r o l   e n a b l e  
 	 	 / /   H a r d w a r e   o p t i o n s  
 	 	 U C H A R   R S 4 8 5 E c h o S u p p r e s s ; 	 / /    
 	 	 U C H A R   P o w e r S a v e E n a b l e ; 	 	 / /    
 	 	 / /   D r i v e r   o p t i o n  
 	 	 U C H A R   D r i v e r T y p e ; 	 	 	 / /   n o n - z e r o   i f   i n t e r f a c e   i s   t o   u s e   V C P   d r i v e r s  
 	 }   F T _ E E P R O M _ X _ S E R I E S ,   * P F T _ E E P R O M _ X _ S E R I E S ;  
  
  
 	 / /   F T 4 2 2 2 H   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ 4 2 2 2 h   {  
 	 	 / /   C o m m o n   h e a d e r  
 	 	 F T _ E E P R O M _ H E A D E R   c o m m o n ; 	 / /   c o m m o n   e l e m e n t s   f o r   a l l   d e v i c e   E E P R O M s  
 	 	 C H A R   R e v i s i o n ; 	 	 	 	 / /   ' A ' ,   ' B ' ,   ' C ' ,   o r   ' D ' .  
 	 	 U C H A R   I 2 C _ S l a v e _ A d d r e s s ;  
 	 	 / /   S u s p e n d  
 	 	 U C H A R   S P I S u s p e n d ; 	 	 	 / /   0   f o r   " D i s a b l e   S P I ,   t r i s t a t e   p i n s " ,   2   f o r   " K e e p   S P I   p i n   s t a t u s " ,   3   f o r   " E n a b l e   S P I   p i n   c o n t r o l "  
 	 	 U C H A R   S u s p e n d O u t P o l ; 	 	 / /   0   f o r   n e g a t i v e ,   1   f o r   p o s i t i v e   ( n o t   i m p l e m e n t e d   o n   R e v   A )  
 	 	 U C H A R   E n a b l e S u s p e n d O u t ; 	 	 / /   n o n - z e r o   t o   e n a b l e   ( n o t   i m p l e m e n t e d   o n   R e v   A )  
 	 	 / /   Q S P I  
 	 	 U C H A R   C l o c k _ S l o w S l e w ; 	 	 / /   n o n - z e r o   i f   c l o c k   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   C l o c k _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   I O 0 _ S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   I O 0   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   I O 1 _ S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   I O 1   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   I O 2 _ S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   I O 2   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   I O 3 _ S l o w S l e w ; 	 	 	 / /   n o n - z e r o   i f   I O 3   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   I O _ D r i v e ;   	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   S l a v e S e l e c t _ P u l l U p ; 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   u p  
 	 	 U C H A R   S l a v e S e l e c t _ P u l l D o w n ; 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   d o w n  
 	 	 U C H A R   S l a v e S e l e c t _ D r i v e ; 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   S l a v e S e l e c t _ S l o w S l e w ; 	 / /   n o n - z e r o   i f   s l a v e   s e l e c t   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   M I S O _ S u s p e n d ; 	 	 	 / /   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h ,   0   a n d   1   r e s e r v e d  
 	 	 U C H A R   S I M O _ S u s p e n d ; 	 	 	 / /   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h ,   0   a n d   1   r e s e r v e d  
 	 	 U C H A R   I O 2 _ I O 3 _ S u s p e n d ; 	 	 / /   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h ,   0   a n d   1   r e s e r v e d  
 	 	 U C H A R   S l a v e S e l e c t _ S u s p e n d ; 	 / /   0   f o r   n o - c h a n g e   ( n o t   i m p l e m e n t e d   o n   R e v   A ) ,   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h ,   1   r e s e r v e d  
 	 	 / /   G P I O  
 	 	 U C H A R   G P I O 0 _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   G P I O 1 _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   G P I O 2 _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   G P I O 3 _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 	 U C H A R   G P I O 0 _ S l o w S l e w ; 	 	 / /   n o n - z e r o   i f   I O 0   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   G P I O 1 _ S l o w S l e w ; 	 	 / /   n o n - z e r o   i f   I O 0   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   G P I O 2 _ S l o w S l e w ; 	 	 / /   n o n - z e r o   i f   I O 0   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   G P I O 3 _ S l o w S l e w ; 	 	 / /   n o n - z e r o   i f   I O 0   p i n   h a s   s l o w   s l e w  
 	 	 U C H A R   G P I O 0 _ P u l l D o w n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   d o w n  
 	 	 U C H A R   G P I O 1 _ P u l l D o w n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   d o w n  
 	 	 U C H A R   G P I O 2 _ P u l l D o w n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   d o w n  
 	 	 U C H A R   G P I O 3 _ P u l l D o w n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   d o w n  
 	 	 U C H A R   G P I O 0 _ P u l l U p ; 	 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   u p  
 	 	 U C H A R   G P I O 1 _ P u l l U p ; 	 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   u p  
 	 	 U C H A R   G P I O 2 _ P u l l U p ; 	 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   u p  
 	 	 U C H A R   G P I O 3 _ P u l l U p ; 	 	 	 / /   n o n - z e r o   t o   e n a b l e   p u l l   u p  
 	 	 U C H A R   G P I O 0 _ O p e n D r a i n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   o p e n   d r a i n  
 	 	 U C H A R   G P I O 1 _ O p e n D r a i n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   o p e n   d r a i n  
 	 	 U C H A R   G P I O 2 _ O p e n D r a i n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   o p e n   d r a i n  
 	 	 U C H A R   G P I O 3 _ O p e n D r a i n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   o p e n   d r a i n  
 	 	 U C H A R   G P I O 0 _ S u s p e n d ; 	 	 / /   0   f o r   n o - c h a n g e ,   1   f o r   i n p u t   ( n o t   i m p l e m e n t e d   o n   R e v   A ) ,   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h  
 	 	 U C H A R   G P I O 1 _ S u s p e n d ; 	 	 / /   0   f o r   n o - c h a n g e ,   1   f o r   i n p u t   ( n o t   i m p l e m e n t e d   o n   R e v   A ) ,   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h  
 	 	 U C H A R   G P I O 2 _ S u s p e n d ; 	 	 / /   0   f o r   n o - c h a n g e ,   1   f o r   i n p u t   ( n o t   i m p l e m e n t e d   o n   R e v   A ) ,   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h  
 	 	 U C H A R   G P I O 3 _ S u s p e n d ; 	 	 / /   0   f o r   n o - c h a n g e ,   1   f o r   i n p u t   ( n o t   i m p l e m e n t e d   o n   R e v   A ) ,   2   f o r   p u s h - l o w ,   3   f o r   p u s h   h i g h  
 	 	 U C H A R   F a l l i n g E d g e ; 	 	 	 / /   n o n - z e r o   t o   c h a n g e   G P I O   o n   f a l l i n g   e d g e  
 	 	 / /   B C D  
 	 	 U C H A R   B C D _ D i s a b l e ; 	 	 	 / /   n o n - z e r o   t o   d i s a b l e   B C D  
 	 	 U C H A R   B C D _ O u t p u t A c t i v e L o w ; 	 / /   n o n - z e r o   t o   s e t   B C D   o u t p u t   a c t i v e   l o w  
 	 	 U C H A R   B C D _ D r i v e ; 	 	 	 / /   v a l i d   v a l u e s   a r e   4 m A ,   8 m A ,   1 2 m A ,   1 6 m A  
 	 }   F T _ E E P R O M _ 4 2 2 2 H ,   * P F T _ E E P R O M _ 4 2 2 2 H ;  
  
  
 	 / /   P o w e r   D e l i v e r y   s t r u c t u r e s   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   P D O   C o n f i g u r a t i o n   s t r u c t u r e ,   m A   s u p p o r t e d   v a l u e s   0   t o   1 0 2 3 0 m A ,   m V   s u p p o r t e d   v a l u e s   0   t o   5 1 1 0 0 m V  
 	 / /   T h i s   i s   p a r t   o f   t h e   F T _ E E P R O M _ P D   s t r u c t u r e .  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ P D _ P D O _ m v _ m a   {  
 	 	 U S H O R T   P D O 1 m a ; 	 / /   P D O 1   m A  
 	 	 U S H O R T   P D O 1 m v ; 	 / /   P D O 1   m V  
 	 	 U S H O R T   P D O 2 m a ; 	 / /   P D O 2   m A  
 	 	 U S H O R T   P D O 2 m v ; 	 / /   P D O 2   m V  
 	 	 U S H O R T   P D O 3 m a ; 	 / /   P D O 3   m A  
 	 	 U S H O R T   P D O 3 m v ; 	 / /   P D O 3   m V  
 	 	 U S H O R T   P D O 4 m a ; 	 / /   P D O 4   m A  
 	 	 U S H O R T   P D O 4 m v ; 	 / /   P D O 4   m V  
 	 	 U S H O R T   P D O 5 m a ; 	 / /   P D O 5   m A   ( F T x 2 3 3 H P   o n l y )  
 	 	 U S H O R T   P D O 5 m v ; 	 / /   P D O 5   m V   ( F T x 2 3 3 H P   o n l y )  
 	 	 U S H O R T   P D O 6 m a ; 	 / /   P D O 6   m A   ( F T x 2 3 3 H P   o n l y )  
 	 	 U S H O R T   P D O 6 m v ; 	 / /   P D O 6   m V   ( F T x 2 3 3 H P   o n l y )  
 	 	 U S H O R T   P D O 7 m a ; 	 / /   P D O 7   m A   ( F T x 2 3 3 H P   o n l y )  
 	 	 U S H O R T   P D O 7 m v ; 	 / /   P D O 7   m V   ( F T x 2 3 3 H P   o n l y )  
 	 }   F T _ E E P R O M _ P D _ P D O _ m v _ m a ;  
  
 	 / /   P D   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   T h i s   i s   a p p e n d e d   t o   t h e   e n d   o f   t h e   b a s e   d e v i c e   s t r u c t u r e .   e _ g .    
 	 / / 	 	 s t r u c t   {  
 	 / / 	 	 	 F T _ E E P R O M _ x x x   b a s e ;  
 	 / / 	 	 	 F T _ E E P R O M _ P D   p d ;  
 	 / / 	 	 } ;  
 	 / /   D e v i c e   G P I O   v a l u e s   a r e :  
 	 / / 	 F T x 2 3 3 H P   -   0   t o   7 ,   1 5   f o r   N / A  
 	 / / 	 F T x 2 3 2 H P   -   0   t o   3 ,   1 5   f o r   N / A  
 	 t y p e d e f   s t r u c t   f t _ e e p r o m _ p d   {  
 	 	 / /   C o n f i g u r a t i o n  
 	 	 U C H A R   s r p r s ; 	 	 / /   n o n - z e r o   t o   e n a b l e   S i n k   R e q u e s t   P o w e r   R o l e   S w a p  
 	 	 U C H A R   s r a p r s ; 	 	 / /   n o n - z e r o   t o   e n a b l e   S i n k   A c c e p t   P R   S w a p  
 	 	 U C H A R   s r r p r s ; 	 	 / /   n o n - z e r o   t o   e n a b l e   S o u r c e   R e q u e s t   P R   S W A P  
 	 	 U C H A R   s a p r s ; 	 	 / /   n o n - z e r o   t o   e n a b l e   S o u r c e   A c c e p t   P R   S W A P  
 	 	 U C H A R   v c o n n s ; 	 	 / /   n o n - z e r o   t o   e n a b l e   v C o n n   S w a p  
 	 	 U C H A R   p a s s t h r u ; 	 	 / /   n o n - z e r o   t o   e n a b l e   P a s s   T h r o u g h   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   e x t m c u ; 	 	 / /   n o n - z e r o   t o   e n a b l e   E x t e r n a l   M C U  
 	 	 U C H A R   p d 2 e n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   P D 2   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   p d 1 a u t o c l k ; 	 / /   n o n - z e r o   t o   e n a b l e   P D 1   A u t o   C l o c k  
 	 	 U C H A R   p d 2 a u t o c l k ; 	 / /   n o n - z e r o   t o   e n a b l e   P D 2   A u t o   C l o c k   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   u s e e f u s e ; 	 	 / /   n o n - z e r o   t o   U s e   E F U S E  
 	 	 U C H A R   e x t v c o n n ; 	 	 / /   n o n - z e r o   t o   e n a b l e   E x t e r n a l   v C o n n  
  
 	 	 / /   G P I O   C o n f i g u r a t i o n  
 	 	 U C H A R   c o u n t ; 	 	 / /   G P I O   C o u n t ,   s u p p o r t e d   v a l u e s   a r e   0   t o   7    
 	 	 U C H A R   g p i o 1 ; 	 	 / /   G P I O   N u m b e r   1 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   g p i o 2 ; 	 	 / /   G P I O   N u m b e r   2 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   g p i o 3 ; 	 	 / /   G P I O   N u m b e r   3 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   g p i o 4 ; 	 	 / /   G P I O   N u m b e r   4 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   g p i o 5 ; 	 	 / /   G P I O   N u m b e r   5 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   g p i o 6 ; 	 	 / /   G P I O   N u m b e r   6 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   g p i o 7 ; 	 	 / /   G P I O   N u m b e r   7 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   p d 1 l d e n ; 	 	 / /   P D 1   L o a d   E n a b l e ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   p d 2 l d e n ; 	 	 / /   P D 2   L o a d   E n a b l e ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   d i s p i n ; 	 	 / /   D i s c h a r g e   P i n ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   d i s e n b m ; 	 	 / /   D i s c h a r g e   E n a b l e   B M ,   0   f o r   " D r i v e   H i " ,   1   f o r   " D r i v e   L o w " ,   2   f o r   " I n p u t   M o d e " ,   3   f o r   " D o n ' t   C a r e "  
 	 	 U C H A R   d i s d i s b m ; 	 	 / /   D i s c h a r g e   D i s a b l e   B M ,   0   f o r   " D r i v e   H i " ,   1   f o r   " D r i v e   L o w " ,   2   f o r   " I n p u t   M o d e " ,   3   f o r   " D o n ' t   C a r e "  
 	 	 U C H A R   c c s e l e c t ; 	 	 / /   C C   S e l e c t   I n d i c a t o r ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
  
 	 	 / /   I S E T   C o n f i g u r a t i o n  
 	 	 U C H A R   i s e t 1 ; 	 	 / /   I S E T 1 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   i s e t 2 ; 	 	 / /   I S E T 2 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   i s e t 3 ; 	 	 / /   I S E T 3 ,   s u p p o r t s   d e v i c e   G P I O   v a l u e s  
 	 	 U C H A R   e x t i s e t ; 	 	 / /   n o n - z e r o   t o   e n a b l e   E X T E N D _ I S E T  
 	 	 U C H A R   i s e t p d 2 ; 	 	 / /   n o n - z e r o   t o   e n a b l e   I S E T _ P D 2  
 	 	 U C H A R   i s e t e n ; 	 	 / /   n o n - z e r o   t o   s e t   I S E T _ E N A B L E D  
  
 	 	 / /   B M   C o n f i g u r a t i o n ,   0   f o r   " D r i v e   H i " ,   1   f o r   " D r i v e   L o w " ,   2   f o r   " I n p u t   M o d e " ,   3   f o r   " D o n ' t   C a r e "  
 	 	 U C H A R   P D O 1 _ G P I O [ 7 ] ; 	 	 / /   P D O 1   G P I O 1   t o   G P I O 7  
 	 	 U C H A R   P D O 2 _ G P I O [ 7 ] ; 	 	 / /   P D O 2   G P I O 1   t o   G P I O 7  
 	 	 U C H A R   P D O 3 _ G P I O [ 7 ] ; 	 	 / /   P D O 3   G P I O 1   t o   G P I O 7  
 	 	 U C H A R   P D O 4 _ G P I O [ 7 ] ; 	 	 / /   P D O 4   G P I O 1   t o   G P I O 7  
 	 	 U C H A R   P D O 5 _ G P I O [ 7 ] ; 	 	 / /   P D O 5   G P I O 1   t o   G P I O 7   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   P D O 6 _ G P I O [ 7 ] ; 	 	 / /   P D O 6   G P I O 1   t o   G P I O 7   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   P D O 7 _ G P I O [ 7 ] ; 	 	 / /   P D O 7   G P I O 1   t o   G P I O 7   ( F T x 2 3 3 H P   o n l y )  
 	 	 U C H A R   V S E T 0 V _ G P I O [ 7 ] ; 	 / /   P D O 7   G P I O 1   t o   G P I O 7  
 	 	 U C H A R   V S A F E 5 V _ G P I O [ 7 ] ; 	 / /   P D O 7   G P I O 1   t o   G P I O 7  
  
 	 	 F T _ E E P R O M _ P D _ P D O _ m v _ m a   B M _ P D O _ S i n k ;  
 	 	 F T _ E E P R O M _ P D _ P D O _ m v _ m a   B M _ P D O _ S o u r c e ;  
 	 	 F T _ E E P R O M _ P D _ P D O _ m v _ m a   B M _ P D O _ S i n k _ 2 ;   / /   ( F T x 2 3 3 H P   o n l y )  
  
 	 	 / /   P D   T i m e r s  
 	 	 U C H A R   s r t ; 	 	 	 / /   S e n d e r   R e s p o n s e   T i m e r  
 	 	 U C H A R   h r t ; 	 	 	 / /   H a r d   R e s e t   T i m e r  
 	 	 U C H A R   s c t ; 	 	 	 / /   S o u r c e   C a p a b i l i t y   T i m e r  
 	 	 U C H A R   d i t ; 	 	 	 / /   D i s c o v e r   I d e n t i t y   T i m e r  
 	 	 U S H O R T   s r c r t ; 	 	 / /   S o u r c e   R e c o v e r   T i m e r  
 	 	 U S H O R T   t r t ; 	 	 	 / /   T r a n s i t i o n   T i m e r  
 	 	 U S H O R T   s o f f t ; 	 	 / /   S o u r c e   o f f   t i m e r  
 	 	 U S H O R T   n r t ; 	 	 	 / /   N o   R e s p o n s e   T i m e r  
 	 	 U S H O R T   s w c t ; 	 	 / /   S i n k   W a i t   C a p a b i l i t y   T i m e r  
 	 	 U S H O R T   s n k r t ; 	 	 / /   S i n k   R e q u e s t   T i m e r  
 	 	 U C H A R   d t ; 	 	 	 / /   D i s c h a r g e   T i m e r  
 	 	 U C H A R   c n s t ; 	 	 	 / /   C h u n k   n o t   s u p p o r t e d   t i m e r  
 	 	 U S H O R T   i t ; 	 	 	 / /   I d l e   T i m e r  
  
 	 	 / /   P D   C o n t r o l  
 	 	 U C H A R   i 2 c a d d r ; 	 	 / /   I 2 C   A d d r e s s   ( h e x )  
 	 	 U I N T   p r o u ; 	 	 	 / /   P o w e r   R e s e r v e d   f o r   O W N   u s e  
 	 	 U I N T   t r i m 1 ; 	 	 	 / /   T R I M 1  
 	 	 U I N T   t r i m 2 ; 	 	 	 / /   T R I M 2  
 	 	 U C H A R   e x t d c ; 	 	 / /   n o n - z e r o   t o   e n a b l e   E T E R N A L _ D C _ P O W E R  
 	 }   F T _ E E P R O M _ P D ,   * P F T _ E E P R O M _ P D ;  
  
 	 / /   F T 2 2 3 3 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 2 2 3 2 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 2 2 3 3 h p  
 	 {  
 	 	 F T _ E E P R O M _ 2 2 3 2 H 	 f t 2 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 2 2 3 3 H P ,   * P F T _ E E P R O M _ 2 2 3 3 H P ;  
  
 	 / /   F T 4 2 3 3 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 4 2 3 2 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 4 2 3 3 h p  
 	 {  
 	 	 F T _ E E P R O M _ 4 2 3 2 H 	 f t 4 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 4 2 3 3 H P ,   * P F T _ E E P R O M _ 4 2 3 3 H P ;  
  
 	 / /   F T 2 2 3 2 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 2 2 3 2 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 2 2 3 2 h p  
 	 {  
 	 	 F T _ E E P R O M _ 2 2 3 2 H 	 f t 2 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 2 2 3 2 H P ,   * P F T _ E E P R O M _ 2 2 3 2 H P ;  
  
 	 / /   F T 4 2 3 2 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 4 2 3 2 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 4 2 3 2 h p  
 	 {  
 	 	 F T _ E E P R O M _ 4 2 3 2 H 	 f t 4 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 4 2 3 2 H P ,   * P F T _ E E P R O M _ 4 2 3 2 H P ;  
  
 	 / /   F T 2 3 3 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 2 3 3 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 2 3 3 h p  
 	 {  
 	 	 F T _ E E P R O M _ 2 3 2 H 	 f t 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 2 3 3 H P ,   * P F T _ E E P R O M _ 2 3 3 H P ;  
  
 	 / /   F T 2 3 2 H P   E E P R O M   s t r u c t u r e   f o r   u s e   w i t h   F T _ E E P R O M _ R e a d   a n d   F T _ E E P R O M _ P r o g r a m  
 	 / /   F T 2 3 2 H   w i t h   p o w e r   d e l i v e r y  
 	 t y p e d e f   s t r u c t   _ f t _ e e p r o m _ 2 3 2 h p  
 	 {  
 	 	 F T _ E E P R O M _ 2 3 2 H 	 f t 2 3 2 h ;  
 	 	 F T _ E E P R O M _ P D 	 p d ;  
 	 }   F T _ E E P R O M _ 2 3 2 H P ,   * P F T _ E E P R O M _ 2 3 2 H P ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E P R O M _ R e a d (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 v o i d   * e e p r o m D a t a ,  
 	 	 D W O R D   e e p r o m D a t a S i z e ,  
 	 	 c h a r   * M a n u f a c t u r e r ,  
 	 	 c h a r   * M a n u f a c t u r e r I d ,  
 	 	 c h a r   * D e s c r i p t i o n ,  
 	 	 c h a r   * S e r i a l N u m b e r  
 	 	 ) ;  
  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E P R O M _ P r o g r a m (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 v o i d   * e e p r o m D a t a ,  
 	 	 D W O R D   e e p r o m D a t a S i z e ,  
 	 	 c h a r   * M a n u f a c t u r e r ,  
 	 	 c h a r   * M a n u f a c t u r e r I d ,  
 	 	 c h a r   * D e s c r i p t i o n ,  
 	 	 c h a r   * S e r i a l N u m b e r  
 	 	 ) ;  
  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t L a t e n c y T i m e r (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   u c L a t e n c y  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t L a t e n c y T i m e r (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P U C H A R   p u c L a t e n c y  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t B i t M o d e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   u c M a s k ,  
 	 	 U C H A R   u c E n a b l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t B i t M o d e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P U C H A R   p u c M o d e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t U S B P a r a m e t e r s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   u l I n T r a n s f e r S i z e ,  
 	 	 U L O N G   u l O u t T r a n s f e r S i z e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t D e a d m a n T i m e o u t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   u l D e a d m a n T i m e o u t  
 	 	 ) ;  
  
 # i f n d e f   _ W I N 3 2  
 	 / /   E x t r a   f u n c t i o n s   f o r   n o n - W i n d o w s   p l a t f o r m s   t o   c o m p e n s a t e  
 	 / /   f o r   l a c k   o f   . I N F   f i l e   t o   s p e c i f y   V e n d o r   a n d   P r o d u c t   I D s .  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   F T _ S e t V I D P I D (  
 	 	 D W O R D   d w V I D ,  
 	 	 D W O R D   d w P I D  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   F T _ G e t V I D P I D (  
 	 	 D W O R D   *   p d w V I D ,  
 	 	 D W O R D   *   p d w P I D  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t D e v i c e L o c I d (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w L o c I d  
 	 	 ) ;  
 # e n d i f   / /   _ W I N 3 2                  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t D e v i c e I n f o (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 F T _ D E V I C E   * l p f t D e v i c e ,  
 	 	 L P D W O R D   l p d w I D ,  
 	 	 P C H A R   S e r i a l N u m b e r ,  
 	 	 P C H A R   D e s c r i p t i o n ,  
 	 	 L P V O I D   D u m m y  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S t o p I n T a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e s t a r t I n T a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ S e t R e s e t P i p e R e t r y C o u n t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w C o u n t  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e s e t P o r t (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C y c l e P o r t (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
  
 	 / /  
 	 / /   W i n 3 2 - t y p e   f u n c t i o n s  
 	 / /  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ H A N D L E   W I N A P I   F T _ W 3 2 _ C r e a t e F i l e (  
 	 	 L P C T S T R 	 	 	 	 	 l p s z N a m e ,  
 	 	 D W O R D 	 	 	 	 	 d w A c c e s s ,  
 	 	 D W O R D 	 	 	 	 	 d w S h a r e M o d e ,  
 	 	 L P S E C U R I T Y _ A T T R I B U T E S 	 l p S e c u r i t y A t t r i b u t e s ,  
 	 	 D W O R D 	 	 	 	 	 d w C r e a t e ,  
 	 	 D W O R D 	 	 	 	 	 d w A t t r s A n d F l a g s ,  
 	 	 H A N D L E 	 	 	 	 	 h T e m p l a t e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ C l o s e H a n d l e (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ R e a d F i l e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P V O I D   l p B u f f e r ,  
 	 	 D W O R D   n B u f f e r S i z e ,  
 	 	 L P D W O R D   l p B y t e s R e t u r n e d ,  
 	 	 L P O V E R L A P P E D   l p O v e r l a p p e d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ W r i t e F i l e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P V O I D   l p B u f f e r ,  
 	 	 D W O R D   n B u f f e r S i z e ,  
 	 	 L P D W O R D   l p B y t e s W r i t t e n ,  
 	 	 L P O V E R L A P P E D   l p O v e r l a p p e d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 D W O R D   W I N A P I   F T _ W 3 2 _ G e t L a s t E r r o r (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ G e t O v e r l a p p e d R e s u l t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P O V E R L A P P E D   l p O v e r l a p p e d ,  
 	 	 L P D W O R D   l p d w B y t e s T r a n s f e r r e d ,  
 	 	 B O O L   b W a i t  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ C a n c e l I o (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
  
 	 / /  
 	 / /   W i n 3 2   C O M M   A P I   t y p e   f u n c t i o n s  
 	 / /  
 	 t y p e d e f   s t r u c t   _ F T C O M S T A T   {  
 	 	 D W O R D   f C t s H o l d   :   1 ;  
 	 	 D W O R D   f D s r H o l d   :   1 ;  
 	 	 D W O R D   f R l s d H o l d   :   1 ;  
 	 	 D W O R D   f X o f f H o l d   :   1 ;  
 	 	 D W O R D   f X o f f S e n t   :   1 ;  
 	 	 D W O R D   f E o f   :   1 ;  
 	 	 D W O R D   f T x i m   :   1 ;  
 	 	 D W O R D   f R e s e r v e d   :   2 5 ;  
 	 	 D W O R D   c b I n Q u e ;  
 	 	 D W O R D   c b O u t Q u e ;  
 	 }   F T C O M S T A T ,   * L P F T C O M S T A T ;  
  
 	 t y p e d e f   s t r u c t   _ F T D C B   {  
 	 	 D W O R D   D C B l e n g t h ; 	 	 	 / *   s i z e o f ( F T D C B ) 	 	 	 	 	 	 * /  
 	 	 D W O R D   B a u d R a t e ; 	 	 	 	 / *   B a u d r a t e   a t   w h i c h   r u n n i n g 	 	 	 * /  
 	 	 D W O R D   f B i n a r y   :   1 ; 	 	 	 / *   B i n a r y   M o d e   ( s k i p   E O F   c h e c k ) 	 	 	 * /  
 	 	 D W O R D   f P a r i t y   :   1 ; 	 	 	 / *   E n a b l e   p a r i t y   c h e c k i n g 	 	 	 	 * /  
 	 	 D W O R D   f O u t x C t s F l o w   :   1 ; 	 	 / *   C T S   h a n d s h a k i n g   o n   o u t p u t 	 	 	 * /  
 	 	 D W O R D   f O u t x D s r F l o w   :   1 ; 	 	 / *   D S R   h a n d s h a k i n g   o n   o u t p u t 	 	 	 * /  
 	 	 D W O R D   f D t r C o n t r o l   :   2 ; 	 	 / *   D T R   F l o w   c o n t r o l 	 	 	 	 	 	 * /  
 	 	 D W O R D   f D s r S e n s i t i v i t y   :   1 ; 	 / *   D S R   S e n s i t i v i t y 	 	 	 	 	 	 * /  
 	 	 D W O R D   f T X C o n t i n u e O n X o f f   :   1 ; 	 / *   C o n t i n u e   T X   w h e n   X o f f   s e n t 	 	 	 * /  
 	 	 D W O R D   f O u t X   :   1 ; 	 	 	 	 / *   E n a b l e   o u t p u t   X - O N / X - O F F 	 	 	 	 * /  
 	 	 D W O R D   f I n X   :   1 ; 	 	 	 	 / *   E n a b l e   i n p u t   X - O N / X - O F F 	 	 	 	 * /  
 	 	 D W O R D   f E r r o r C h a r   :   1 ; 	 	 / *   E n a b l e   E r r   R e p l a c e m e n t 	 	 	 	 * /  
 	 	 D W O R D   f N u l l   :   1 ; 	 	 	 	 / *   E n a b l e   N u l l   s t r i p p i n g 	 	 	 	 * /  
 	 	 D W O R D   f R t s C o n t r o l   :   2 ; 	 	 / *   R t s   F l o w   c o n t r o l 	 	 	 	 	 	 * /  
 	 	 D W O R D   f A b o r t O n E r r o r   :   1 ; 	 	 / *   A b o r t   a l l   r e a d s   a n d   w r i t e s   o n   E r r o r 	 * /  
 	 	 D W O R D   f D u m m y 2   :   1 7 ; 	 	 	 / *   R e s e r v e d 	 	 	 	 	 	 	 	 * /  
 	 	 W O R D   w R e s e r v e d ; 	 	 	 	 / *   N o t   c u r r e n t l y   u s e d 	 	 	 	 	 * /  
 	 	 W O R D   X o n L i m ; 	 	 	 	 / *   T r a n s m i t   X - O N   t h r e s h o l d 	 	 	 	 * /  
 	 	 W O R D   X o f f L i m ; 	 	 	 	 / *   T r a n s m i t   X - O F F   t h r e s h o l d 	 	 	 	 * /  
 	 	 B Y T E   B y t e S i z e ; 	 	 	 	 / *   N u m b e r   o f   b i t s / b y t e ,   4 - 8 	 	 	 	 * /  
 	 	 B Y T E   P a r i t y ; 	 	 	 	 / *   0 - 4 = N o n e , O d d , E v e n , M a r k , S p a c e 	 	 	 * /  
 	 	 B Y T E   S t o p B i t s ; 	 	 	 	 / *   F T _ S T O P _ B I T S _ 1   o r   F T _ S T O P _ B I T S _ 2 	 	 * /  
 	 	 c h a r   X o n C h a r ; 	 	 	 	 / *   T x   a n d   R x   X - O N   c h a r a c t e r 	 	 	 	 * /  
 	 	 c h a r   X o f f C h a r ; 	 	 	 	 / *   T x   a n d   R x   X - O F F   c h a r a c t e r 	 	 	 * /  
 	 	 c h a r   E r r o r C h a r ; 	 	 	 	 / *   E r r o r   r e p l a c e m e n t   c h a r 	 	 	 	 * /  
 	 	 c h a r   E o f C h a r ; 	 	 	 	 / *   E n d   o f   I n p u t   c h a r a c t e r 	 	 	 	 * /  
 	 	 c h a r   E v t C h a r ; 	 	 	 	 / *   R e c e i v e d   E v e n t   c h a r a c t e r 	 	 	 	 * /  
 	 	 W O R D   w R e s e r v e d 1 ; 	 	 	 / *   F i l l   f o r   n o w . 	 	 	 	 	 	 * /  
 	 }   F T D C B ,   * L P F T D C B ;  
  
 	 t y p e d e f   s t r u c t   _ F T T I M E O U T S   {  
 	 	 D W O R D   R e a d I n t e r v a l T i m e o u t ; 	 	 	 / *   M a x i m u m   t i m e   b e t w e e n   r e a d   c h a r s . 	 * /  
 	 	 D W O R D   R e a d T o t a l T i m e o u t M u l t i p l i e r ; 	 / *   M u l t i p l i e r   o f   c h a r a c t e r s . 	 	 * /  
 	 	 D W O R D   R e a d T o t a l T i m e o u t C o n s t a n t ; 	 	 / *   C o n s t a n t   i n   m i l l i s e c o n d s . 	 	 * /  
 	 	 D W O R D   W r i t e T o t a l T i m e o u t M u l t i p l i e r ; 	 / *   M u l t i p l i e r   o f   c h a r a c t e r s . 	 	 * /  
 	 	 D W O R D   W r i t e T o t a l T i m e o u t C o n s t a n t ; 	 / *   C o n s t a n t   i n   m i l l i s e c o n d s . 	 	 * /  
 	 }   F T T I M E O U T S ,   * L P F T T I M E O U T S ;  
  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ C l e a r C o m m B r e a k (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ C l e a r C o m m E r r o r (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w E r r o r s ,  
 	 	 L P F T C O M S T A T   l p f t C o m s t a t  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ E s c a p e C o m m F u n c t i o n (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w F u n c  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ G e t C o m m M o d e m S t a t u s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w M o d e m S t a t u s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ G e t C o m m S t a t e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P F T D C B   l p f t D c b  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ G e t C o m m T i m e o u t s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 F T T I M E O U T S   * p T i m e o u t s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ P u r g e C o m m (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ S e t C o m m B r e a k (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ S e t C o m m M a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U L O N G   u l E v e n t M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ G e t C o m m M a s k (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w E v e n t M a s k  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ S e t C o m m S t a t e (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P F T D C B   l p f t D c b  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ S e t C o m m T i m e o u t s (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 F T T I M E O U T S   * p T i m e o u t s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ S e t u p C o m m (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   d w R e a d B u f f e r S i z e ,  
 	 	 D W O R D   d w W r i t e B u f f e r S i z e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 B O O L   W I N A P I   F T _ W 3 2 _ W a i t C o m m E v e n t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 P U L O N G   p u l E v e n t ,  
 	 	 L P O V E R L A P P E D   l p O v e r l a p p e d  
 	 	 ) ;  
  
  
 	 / /  
 	 / /   D e v i c e   i n f o r m a t i o n  
 	 / /  
  
 	 t y p e d e f   s t r u c t   _ f t _ d e v i c e _ l i s t _ i n f o _ n o d e   {  
 	 	 U L O N G   F l a g s ;  
 	 	 U L O N G   T y p e ;  
 	 	 U L O N G   I D ;  
 	 	 D W O R D   L o c I d ;  
 	 	 c h a r   S e r i a l N u m b e r [ 1 6 ] ;  
 	 	 c h a r   D e s c r i p t i o n [ 6 4 ] ;  
 	 	 F T _ H A N D L E   f t H a n d l e ;  
 	 }   F T _ D E V I C E _ L I S T _ I N F O _ N O D E ;  
  
 	 / /   D e v i c e   i n f o r m a t i o n   f l a g s  
 	 e n u m   {  
 	 	 F T _ F L A G S _ O P E N E D   =   1 ,  
 	 	 F T _ F L A G S _ H I S P E E D   =   2  
 	 } ;  
  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C r e a t e D e v i c e I n f o L i s t (  
 	 	 L P D W O R D   l p d w N u m D e v s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t D e v i c e I n f o L i s t (  
 	 	 F T _ D E V I C E _ L I S T _ I N F O _ N O D E   * p D e s t ,  
 	 	 L P D W O R D   l p d w N u m D e v s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t D e v i c e I n f o D e t a i l (  
 	 	 D W O R D   d w I n d e x ,  
 	 	 L P D W O R D   l p d w F l a g s ,  
 	 	 L P D W O R D   l p d w T y p e ,  
 	 	 L P D W O R D   l p d w I D ,  
 	 	 L P D W O R D   l p d w L o c I d ,  
 	 	 L P V O I D   l p S e r i a l N u m b e r ,  
 	 	 L P V O I D   l p D e s c r i p t i o n ,  
 	 	 F T _ H A N D L E   * p f t H a n d l e  
 	 	 ) ;  
  
  
 	 / /  
 	 / /   V e r s i o n   i n f o r m a t i o n  
 	 / /  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t D r i v e r V e r s i o n (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P D W O R D   l p d w V e r s i o n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t L i b r a r y V e r s i o n (  
 	 	 L P D W O R D   l p d w V e r s i o n  
 	 	 ) ;  
  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e s c a n (  
 	 	 v o i d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ R e l o a d (  
 	 	 W O R D   w V i d ,  
 	 	 W O R D   w P i d  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t C o m P o r t N u m b e r (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 L P L O N G 	 l p d w C o m P o r t N u m b e r  
 	 	 ) ;  
  
  
 	 / /  
 	 / /   F T 2 3 2 H   a d d i t i o n a l   E E P R O M   f u n c t i o n s  
 	 / /  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ R e a d C o n f i g (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   u c A d d r e s s ,  
 	 	 P U C H A R   p u c V a l u e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ W r i t e C o n f i g (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   u c A d d r e s s ,  
 	 	 U C H A R   u c V a l u e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ E E _ R e a d E C C (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   u c O p t i o n ,  
 	 	 L P W O R D   l p w V a l u e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ G e t Q u e u e S t a t u s E x (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 D W O R D   * d w R x B y t e s  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C o m P o r t I d l e (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ C o m P o r t C a n c e l I d l e (  
 	 	 F T _ H A N D L E   f t H a n d l e  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ V e n d o r C m d G e t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   R e q u e s t ,  
 	 	 U C H A R   * B u f ,  
 	 	 U S H O R T   L e n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ V e n d o r C m d S e t (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U C H A R   R e q u e s t ,  
 	 	 U C H A R   * B u f ,  
 	 	 U S H O R T   L e n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ V e n d o r C m d G e t E x (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U S H O R T   w V a l u e ,  
 	 	 U C H A R   * B u f ,  
 	 	 U S H O R T   L e n  
 	 	 ) ;  
  
 	 F T D 2 X X _ A P I  
 	 	 F T _ S T A T U S   W I N A P I   F T _ V e n d o r C m d S e t E x (  
 	 	 F T _ H A N D L E   f t H a n d l e ,  
 	 	 U S H O R T   w V a l u e ,  
 	 	 U C H A R   * B u f ,  
 	 	 U S H O R T   L e n  
 	 	 ) ;  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
  
 # e n d i f 	 / *   F T D 2 X X _ H   * /  
 