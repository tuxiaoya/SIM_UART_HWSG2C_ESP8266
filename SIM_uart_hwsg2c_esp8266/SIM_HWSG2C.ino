/***************************************************
* use ESp8266 to simuction hwsg2c uart port
* ****************************************************  
* @author   tuxiaoya 
* @version  V1.0
* @date  2020-1-26
  
* ****************************************************/
#include <Wire.h>
#include "SIm_HWSG2C.h"

SIm_HWSG2C  sHWSG2C = sHWSG2C();

void setup() {
  Serial.begin(115200);
  MLX90614.begin();  
}

void loop() {
  Serial.print("Ambient = "); Serial.print(MLX90614.GetAmbientTemp_Celsius());    Serial.println(" *C");
  Serial.print("Object  = "); Serial.print(MLX90614.GetObjectTemp_Celsius());     Serial.println(" *C");
  Serial.print("Ambient = "); Serial.print(MLX90614.GetAmbientTemp_Fahrenheit()); Serial.println(" *F");
  Serial.print("Object  = "); Serial.print(MLX90614.GetObjectTemp_Fahrenheit());  Serial.println(" *F");

  Serial.println();
  delay(1500);
}
