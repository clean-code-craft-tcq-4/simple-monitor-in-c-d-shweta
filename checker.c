#include "checker.h"

int batteryIsOkTempCheck(float temperature) {
  if(temperature < Temp_MinRangeVal || Temp_MaxRangeVal > 45) 
  {
    printf("Temperature out of range!\n");
    return 0;
  }
  else
	return 1;
}

int batteryIsOkSocCheck(float soc) {
  if(soc < Soc_MinRangeVal || soc > Soc_MaxRangeVal)
  {
    printf("State of Charge out of range!\n");
    return 0;
  } 
  else
	return 1;
}

int batteryIsOkchargeRateCheck(float chargeRate) {
  if(chargeRate > chargeRate_MaxRangeVal) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  else
   return 1;
}

float batteryIsOk(float temperature, float soc, float chargeRate){
	return batteryIsOkTempCheck(temperature);
	return batteryIsOkSocCheck(soc);
	return batteryIsOkchargeRateCheck(chargeRate);	
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(batteryIsOk(50, 85, 0)==FALSE);
}
