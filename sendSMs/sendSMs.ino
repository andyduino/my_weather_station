#include <GPRSbee.h>

#include <SoftwareSerial.h>

#define GPRSBEE_PWRPIN  6
#define XBEECTS_PIN     8

void setup() {
  Serial.begin(9600);
  while(!Serial);;
  Serial.println("GPRS - Send SMS Test ...");
  gprsbee.init(Serial, XBEECTS_PIN, GPRSBEE_PWRPIN);
  delay(1000);
  Serial.println("Init success, start to send SMS message...");
  gprsbee.sendSMS("130****3364","hello,world"); //define phone number and text
}

void loop() {
  //nothing to do
}
