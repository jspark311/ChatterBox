/* Compiler */
#include <inttypes.h>
#include <stdint.h>
#include <math.h>

/* CppPotpourri */
#include <CppPotpourri.h>
#include <AbstractPlatform.h>
#include <StringBuilder.h>
#include <ParsingConsole.h>
#include <StopWatch.h>
#include <uuid.h>
#include <SensorFilter.h>
#include <M2MLink/M2MLink.h>
#include <I2CAdapter.h>
#include "UARTAdapter.h"

#include <cbor-cpp/cbor.h>

/* ManuvrDrivers */
#include <ManuvrDrivers.h>

#ifndef __CHATTERBOX_H__
#define __CHATTERBOX_H__

#define TEST_PROG_VERSION           "1.0"


/*******************************************************************************
* Pin definitions and hardware constants.
*******************************************************************************/
/* Platform pins */
#define UART2_RX_PIN       16   // INPUT_PULLUP
#define UART2_TX_PIN       17   // OUTPUT
#define SDA0_PIN           25   // Touch and power board service.
#define SCL0_PIN           26   // Touch and power board service.

//#define LED_R_PIN          26   // Touch and power board service.
//#define LED_G_PIN          26   // Touch and power board service.
//#define LED_B_PIN          26   // Touch and power board service.


/*******************************************************************************
* Invariant software parameters
*******************************************************************************/


/*******************************************************************************
* Types
*******************************************************************************/


/*******************************************************************************
* Externs to hardware resources
*******************************************************************************/


/*******************************************************************************
* Externs to hardware resources
*******************************************************************************/
extern I2CAdapter i2c0;


/*******************************************************************************
* Externs to software singletons
*******************************************************************************/
extern M2MLink* mlink_local;


/*******************************************************************************
* Function prototypes
*******************************************************************************/
int8_t report_fault_condition(int8_t);


#endif    // __HEAT_PUMP_H__
