




#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

#include "MEMMAP.h"
#include "UTILS.h"
#include "STDTYPS.h"

#include "EEPROM_private.h"

void EEPROM_Write(u16 Address,u8 Data);
void EEPROM_u16Write(u16 Address,u16 Data);
u8 EEPROM_Read(u16 Address);
u16 EEPROM_u16Read(u16 Address);


#endif /* EEPROM_INTERFACE_H_ */