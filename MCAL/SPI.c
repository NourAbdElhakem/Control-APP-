#include "SPI.h"


void SPI_init(MASTER_SLEVE_type type)
{
	if(type==MASTER)
	{
		SET_BIT(SPCR,MSTR);
	}
	else
	{
		CLEAR_BIT(SPCR,MSTR);
	}
	
	// set clock of SPI default CLK_SYS/4
	
	
	SET_BIT(SPCR,SPE);  //enable spi
	

	
}



u8 SPI_sendReceive(u8 data)
{
	SPDR=data;
	while(!READ_BIT(SPCR,SPIF));
	
	return  SPDR;
}


