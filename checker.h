#include <stdio.h>
#include <assert.h>

#define Temp_MinRangeVal        (0)
#define Temp_MaxRangeVal        (45)
#define Soc_MinRangeVal         (20)
#define Soc_MaxRangeVal         (80)
#define chargeRate_MaxRangeVal  (0.8)

float batteryIsOk(float temperature, float soc, float chargeRate);
int batteryIsOkchargeRateCheck(float chargeRate);
int batteryIsOkSocCheck(float soc);
int batteryIsOkTempCheck(float temperature);


