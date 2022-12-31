/*
 * Stepper.h
 *
 * Created: 11/14/2022 10:29:08 PM
 *  Author: 20100
 */ 


#ifndef STEPPER_H_
#define STEPPER_H_


#define DELAY 300
/************************************************/
#define COIL1A PINC0
#define COIL1B PINC1
#define COIL2A PINC2
#define COIL2B PINC3
/************************************************/
void STEPPER_BiPolar_CW(void);
void STEPPER_BiPolar_CCW(void);
void STEPPER_UniPolar_CW(void);
void STEPPER_UniPolar_CCW(void);
void STEPPER_UniPolar_CW_HS(void);
void STEPPER_UniPolar_CCW_HS(void);




#endif /* STEPPER_H_ */