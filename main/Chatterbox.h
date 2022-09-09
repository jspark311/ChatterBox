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
#include <ManuvrLink/ManuvrLink.h>
#include <I2CAdapter.h>
#include "UARTAdapter.h"

#include <cbor-cpp/cbor.h>

/* ManuvrDrivers */
#include <ManuvrDrivers.h>

#ifndef __HEAT_PUMP_H__
#define __HEAT_PUMP_H__

#define TEST_PROG_VERSION           "1.0"


/*******************************************************************************
* Pin definitions and hardware constants.
*******************************************************************************/
/* Platform pins */
#define UART2_RX_PIN       16   // INPUT_PULLUP
#define UART2_TX_PIN       17   // INPUT_PULLUP
#define SDA0_PIN           25   // Touch and power board service.
#define SCL0_PIN           26   // Touch and power board service.


/*******************************************************************************
* Invariant software parameters
*******************************************************************************/


/*******************************************************************************
* Types
*******************************************************************************/
enum class SensorID : uint8_t {
  BARO                 =  0,  //
  TEMP_MOSFET_BANK     =  1,  //
  TEMP_XCHANGER0_IN    =  2,  //
  TEMP_XCHANGER0_OUT   =  3,  //
  TEMP_XCHANGER1_IN    =  4,  //
  TEMP_XCHANGER1_OUT   =  5,  //
  FAN_SPEED_0          =  6,  //
  FAN_SPEED_1          =  7,  //
  FAN_SPEED_2          =  8,  //
  PUMP_SPEED_0         =  9,  //
  PUMP_SPEED_1         = 10,  //
};


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
extern ManuvrLink* mlink_local;


/*******************************************************************************
* Function prototypes
*******************************************************************************/
int8_t report_fault_condition(int8_t);


#endif    // __HEAT_PUMP_H__
