#include "EEPROM_interface.h"


void EEPROM_Write(u16 Address,u8 Data)
{
	if(Address <= 1023)
	{
		/* Wait for completion of previous write */
		while(READ_BIT(EECR,EECR_EEWE));
		
		/* Setting up Address and Data Registers */
		EEAR = Address;
		EEDR = Data;
		/* Write logical one to EEMWE */
		SET_BIT(EECR,EECR_EEMWE);
		/* Start EEPROM write by setting EEWE */
		SET_BIT(EECR,EECR_EEWE);
	}
	else
	{
		/* Return Error */
	}
}

void EEPROM_u16Write(u16 Address,u16 Data)
{
	
	if(Address <= 1023)
	{
		EEPROM_Write(Address,Data);
		Address++;
		Data = (u16)(Data>>8);
		EEPROM_Write(Address,Data);
	}
	else
	{
		/* Return Error */
	}
}

u8 EEPROM_Read(u16 Address)
{
	if(Address <= 1023)
	{
		/* Wait for completion of previous write */
		while(READ_BIT(EECR,EECR_EEWE));
		
		/* Setting up Address  */
		EEAR = Address;

		/* Start EEPROM read by setting EERE */
		SET_BIT(EECR,EECR_EERE);
		
		/* Return Data */
		return EEDR;
	}
	else
	{
		/* Return Error */
	}
	
}

u16 EEPROM_u16Read(u16 Address)
{
	u16 ReturnValue = 0;
	u8 Temp = 0;
	
	if(Address <= 1023)
	{
		
		/* Return Data */
		ReturnValue = (u16)EEPROM_Read(Address);
		Temp = 
		ReturnValue |= (((u16)(EEPROM_Read(Address+1)))<<8);
		
		return ReturnValue;
	}
	else
	{
		/* Return Error */
	}
	
}