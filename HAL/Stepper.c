
#include "util/delay.h"
#include "Stepper.h"
#include "DIO_interface.h"




void STEPPER_BiPolar_CW(void)
{
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
}
void STEPPER_BiPolar_CCW(void)
{
	
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	
}
void STEPPER_UniPolar_CW(void)
{
	
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	
}
void STEPPER_UniPolar_CCW(void)
{
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
}
void STEPPER_UniPolar_CW_HS(void)
{
	
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	
}
void STEPPER_UniPolar_CCW_HS(void)
{
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,HIGH);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,LOW);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,HIGH);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,LOW);
	_delay_ms(DELAY);
	DIO_Write_PIN(COIL1A,HIGH);
	DIO_Write_PIN(COIL1B,LOW);
	DIO_Write_PIN(COIL2A,LOW);
	DIO_Write_PIN(COIL2B,HIGH);
	_delay_ms(DELAY);
	
	
	
	
}