#define F_CPU 8000000
#include <stdlib.h>
#include <util/delay.h>
#include "STDTYPS.h"
#include "MEMMAP.h"
#include "UTILS.h"
#include "DIO_interface.h"
#include "MOTOR_cfg.h"
#include "LCD_interface.h"
#include "ADC.h"
#include "Stepper.h"
#include "Keypad.h"
#include "Sensors.h"
#include "interrupt.h"
#include "timer.h"
#include "Ultrasonic.h"
#include "EEPROM_interface.h"
#include "UART.h"
#include "Api.h"
#include "RGP_LED.h"
#include "MOTOR_interface.h"


#define Yellow_LED  PINC2
#define RED_LED  PINC1

extern volatile u8 AD_FLAG;
extern void(*ptr_fun[2])();
		
 u16 x=0 ,d,*pass=0x100;
u8 str2[20]="nour";
u8 str1[20];
extern u8 num_aft_str;

extern u8 RGP_arr[rgp_colors][3];


int main(void)
{
	
sei();

	
	DIO_INITPIN();
	LCD_INIT();
	ADC_Init(VREF_VCC,ADC_SCALER_64);
	LCD_Clear();
	
	

ICR1=256;

 
UART_init();

	while(1) 
	{
	
UART_Recieve_string(str1);

API_gettable(str1);


	}
	
	
}


/*
ISR(UART_RX_vect)
{
	
	
	PORTB=0xff;
	
}*/

