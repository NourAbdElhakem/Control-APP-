


#ifndef RGP_LED_H_
#define RGP_LED_H_

#include "STDTYPS.h"
#include "MEMMAP.h"
#include "UTILS.h"


/**********************************CONF RGP *********************************/


#define rgp_colors 9
#define RED_pin  OCR1A
#define Green_pin  OCR1B
#define BLUE_pin  OCR0




#define RED  0
#define GREEN  1
#define	BLACK  2
#define	YELLOW  3
#define	PINK  4
#define	SKY  5
#define	White  6
#define	BLUE  7
#define	Purple  8


/**********************************************************************/

void RGP_Generate_Colors(u8**str,u8 CLR);







#endif /* RGP_LED_H_ */