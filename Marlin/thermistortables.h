#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

const short temptable_70[][2] PROGMEM = {
 {1*OVERSAMPLENR,713},
 {54*OVERSAMPLENR,236},
 {107*OVERSAMPLENR,195},
 {160*OVERSAMPLENR,172},
 {213*OVERSAMPLENR,157},
 {266*OVERSAMPLENR,144},
 {319*OVERSAMPLENR,134},
 {372*OVERSAMPLENR,125},
 {425*OVERSAMPLENR,117},
 {478*OVERSAMPLENR,110},
 {531*OVERSAMPLENR,103},
 {584*OVERSAMPLENR,96},
 {637*OVERSAMPLENR,89},
 {690*OVERSAMPLENR,83},
 {743*OVERSAMPLENR,75},
 {796*OVERSAMPLENR,68},
 {849*OVERSAMPLENR,59},
 {902*OVERSAMPLENR,48},
 {955*OVERSAMPLENR,34},
 {1008*OVERSAMPLENR,3}
};

#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

# define HEATER_0_TEMPTABLE TT_NAME(THERMISTORHEATER_0)
# define HEATER_0_TEMPTABLE_LEN (sizeof(HEATER_0_TEMPTABLE)/sizeof(*HEATER_0_TEMPTABLE))

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#  define HEATER_0_RAW_HI_TEMP 0
#  define HEATER_0_RAW_LO_TEMP 16383

#endif //THERMISTORTABLES_H_
