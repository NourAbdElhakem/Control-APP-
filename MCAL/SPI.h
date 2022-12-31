

#ifndef SPI_H_
#define SPI_H_

#include "STDTYPS.h"
#include "MEMMAP.h"
#include "UTILS.h"

typedef enum
{
	MASTER,
	SLEVE
	}MASTER_SLEVE_type;


void SPI_init(MASTER_SLEVE_type type);



u8 SPI_sendReceive(u8 data);





#endif /* SPI_H_ */