


#include "STDTYPS.h"
#include "ADC.h"

#ifndef SENSORS_H_
#define SENSORS_H_
#define POT_CH  CH_0
/*******************confg******************/


typedef enum
{
	LM_35

	}sensor_type;




#define LM_35  CH_7

#define SMOKE  CH_0


/************************************/






u16 MPX4115_GetPress(void);
u16 TEMP_Read(sensor_type sensor);







#endif /* SENSORS_H_ */