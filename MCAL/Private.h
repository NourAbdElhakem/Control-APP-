/*
 * Private.h
 *
 * Created: 11/6/2022 5:44:30 PM
 *  Author: 20100
 */ 


#ifndef PRIVATE_H_
#define PRIVATE_H_

void static DIO_InitPin(DIO_port_type port , u8 pin_num ,DIO_pin_status status);
void static DIO_InitPin_only(u8 pin_num,DIO_pin_status status)	;

#endif /* PRIVATE_H_ */