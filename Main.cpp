#include <Wire.h>
 
// Define Slave I2C Address
#define SLAVE_ADDR 9
byte bf[8];
void setup() {
  // Initialize I2C communications as Master
  Wire.begin();
  //Wire.setClock(1000000);
  // Serial monitor
  Serial.begin(115200);
}
void loop() {
  if(Serial.available()){
    Serial.readBytes(bf, 8);
    // Write data to the Slave
    Wire.beginTransmission(SLAVE_ADDR);
    Wire.write(bf[0]);
    Wire.write(bf[1]);
    Wire.write(bf[2]);
    Wire.write(bf[3]);
    Wire.write(bf[4]);
    Wire.write(bf[5]);
    Wire.write(bf[6]);
    Wire.write(bf[7]);
    Wire.endTransmission();
  }
}