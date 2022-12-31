

#ifndef KEYPAD_CFG_H_
#define KEYPAD_CFG_H_

#include "STDTYPS.h"

#define  ROWS  4
#define  COLS  4

#define   FIRST_OUTPUT  PIND4
#define   FIRST_INPUT   PINB0
#define   NO_KEY    'T'

#ifdef KEYPAD_PROG

static const u8 KeysArray[ROWS][COLS]={
  { '7','8','9','A'},
  { '4','5','6','B'},	  
  { '1','2','3','E'},
  { 'C','0','=','C'} 
  };

	


#endif




#endif /* KEYPAD_CFG_H_ */