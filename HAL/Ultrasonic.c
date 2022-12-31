#include "STDTYPS.h"
#include "UTILS.h"
#include "DIO_interface.h"
#include "timer.h"
#include "util\delay.h"
#include "Ultrasonic.h"

static volatile u16  Ultra_Flag=0;
static volatile u16 COUNT=0 ;
static volatile u16 t1_ultra=0;
static volatile u16  t2_ultra=0;


void ULTRASONIC_INIT(void)
{
	Timer1_ICU_InterruptEnable();
	
}


u8 Ultrasonic_Gettable(u16*pdata)
{
	u16 d ,t,c=0;
	Timer1_InputCaptureEdge(RISING);
		DIO_Write_PIN(Ultrasonic_pin,HIGH);
		_delay_us(10);
		DIO_Write_PIN(Ultrasonic_pin,LOW);
	while(Ultra_Flag<1);
	
	if(Ultra_Flag==2)
	{
		t=(t2_ultra-t1_ultra)+(COUNT*65535);
		d=t/58;
		*pdata=d;
	//	Ultra_Flag=0;

		
		return 1 ;
	}
	
	
	return 0 ;
	
	
}




ISR(TIMER1_ICU_vect)
{
	
	if(Ultra_Flag==0)
	{
		Timer1_InputCaptureEdge(FALLING);
		t1_ultra=ICR1;
		Ultra_Flag=1;
		
	}
	
	else if(Ultra_Flag==1)
	{
		
		t2_ultra=ICR1;
		Ultra_Flag=2;
	}
	
	
}


ISR(TIMER1_OVF_vect)
{
	
	COUNT++;
}


