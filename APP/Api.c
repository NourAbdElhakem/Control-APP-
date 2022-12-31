
#include "Api.h"

extern u8 num_aft_str;				
int num=0 ;


extern u8 RGP_arr[rgp_colors][3];



int str_lengh(char* arr){

	int i ,res;

	for (i=0;arr[i];++i)
	{
	}

	return i;
}


u8 str_compare(u8*str1,u8*str2)
{
	int i ,x,y  ;
	x=str_lengh(str1);
	y=str_lengh(str2);

	if(x!=y){
		return 0 ;

	}

	for(i=0;i<x;++i)
	{
		if(str1[i]!=str2[i]){

			return 0 ;
		}


	}

	return 1 ;


}

	
	void ledonn(u8 num)
	{
		num=num_aft_str;
		
		switch(num)
		{
			case '0':
			DIO_Write_PIN(Pin_led_0,HIGH);
			break;
			
			case '1':
			DIO_Write_PIN(Pin_led_1,HIGH);
			break;
			
			case '2':
			DIO_Write_PIN(Pin_led_2,HIGH);
			break;
			
			case '3':
			DIO_Write_PIN(Pin_led_3,HIGH);
			break;
			
			case '4':
			DIO_Write_PIN(Pin_led_4,HIGH);
			break;
			
			case '5':
			DIO_Write_PIN(Pin_led_5,HIGH);
			break;
			
			case '6':
			DIO_Write_PIN(Pin_led_6,HIGH);
			break;
			
			case '7':
			DIO_Write_PIN(Pin_led_7,HIGH);
			break;
				
		}	
		
	}







	void ledoff(u8 num)
	{
		num=num_aft_str;
		
		switch(num)
		{
			case '0':
			DIO_Write_PIN(Pin_led_0,LOW);
			break;
			
			case '1':
			DIO_Write_PIN(Pin_led_1,LOW);
			break;
			
			case '2':
			DIO_Write_PIN(Pin_led_2,LOW);
			break;
			
			case '3':
			DIO_Write_PIN(Pin_led_3,LOW);
			break;
			
			case '4':
			DIO_Write_PIN(Pin_led_4,LOW);
			break;
			
			case '5':
			DIO_Write_PIN(Pin_led_5,LOW);
			break;
			
			case '6':
			DIO_Write_PIN(Pin_led_6,LOW);
			break;
			
			case '7':
			DIO_Write_PIN(Pin_led_7,LOW);
			break;
			
		}
		
		
	}



void motoron(u8 num)
{

num=num_aft_str;

	switch(num)
	{
		case '1':
		MOTOR_CW(M1);
		break;
		
		case '2':
		MOTOR_CW(M2);
		break;
		
		case '3':
		MOTOR_CW(M3);
		break;
		
		case '4':
		MOTOR_CW(M4);
		break;
		
		
	}
	
	
	
}

void motoroff(u8 num)
{
	num=num_aft_str;
switch(num)
{
	case '1':
	MOTOR_STOP(M1);
	break;
	
	case '2':
	MOTOR_STOP(M2);
	break;
	
	case '3':
	MOTOR_STOP(M3);
	break;
	
	case '4':
	MOTOR_STOP(M4);
	break;
	
	
}

	
}


void lcdprint(void)
{

LCD_writeString("WELL DONE");	
		
}

u8* strings[size_arrfun]={"ledonn","ledoff","motoron","motoroff","lcdprint"};
	
void(*ptr_fun[size_arrfun])()={ledonn,ledoff,motoron,motoroff,lcdprint};



void API_gettable(u8*str)
{
	
u8 i,j=0 ;
	
	for(i=0;i<size_arrfun;++i)
	{
		if(str_compare(strings[i],str))
		{
			
			ptr_fun[i]();
			return;
			
		}
		
		
		
	}
	
	

	
}
