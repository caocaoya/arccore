/*
* Configuration of module: Rte (Rte_Data.h)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       0.0.13
*
* Generated by Arctic Studio (http://arccore.com) 
*/

/* Rte_Data.h */

#ifndef RTE_DATA_H
#define RTE_DATA_H

#include "Rte_Type.h"
#include "cirq_buffer.h"

void Rte_BlinkerRunnable(void);

Std_ReturnType Rte_DigitalOutput_Set(IoHwAb_SignalType SignalId,
		const DigitalLevel value);

#endif
