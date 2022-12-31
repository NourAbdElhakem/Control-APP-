
#include "RGP_LED.h"


/*****************************CONFG**************************************/


                           // RED  GREEN   BLUE
u8 RGP_arr[rgp_colors][3]={
	/*RED*/                 {254,0,0},
	/*GREEN*/               {0,254,0},
	/*BLUE*/				 {0,0,254},
	/*yellow*/			 {254,254,0},
	/* pink  */			 {254,0,254},
	/* sky */			 {0,254,254},
	/*white*/			 {254,254,254},
	/*black*/	         {0,0,0},
	/*purple*/			 {128,0,254}
	
	
};



void RGP_Generate_Colors(u8**str,u8 CLR)
{
	
RED_pin=(*(*(str+CLR)+0));
Green_pin=(*(*(str+CLR)+1));
BLUE_pin=(*(*(str+CLR)+2));
	
}
