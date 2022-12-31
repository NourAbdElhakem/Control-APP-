
#ifndef API_H_
#define API_H_

#include "STDTYPS.h"
#include "UTILS.h"
#include "MEMMAP.h"
#include "DIO_interface.h"
#include "RGP_LED.h"
#include "MOTOR_interface.h"
#include "UART.h"

/**********************confg**************************/

#define Pin_led_0   PINC0
#define Pin_led_1   PINC1
#define Pin_led_2   PINC2
#define Pin_led_3   PINC3
#define Pin_led_4   PINC4
#define Pin_led_5   PINC5
#define Pin_led_6   PINC6
#define Pin_led_7   PINC7






/*************************************/












#define size_arrfun  5


#define array_strings  str1

u8 str_compare(u8*str1,u8*str2);

int str_lengh(char* arr);


void API_gettable(u8*str);
void ledonn(u8 num);
void ledoff(u8 num);


void lcdprint(void);


#endif /* API_H_ */