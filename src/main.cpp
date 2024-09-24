#include <Arduino.h>

#define TOUCH 22



void setup() {
    Serial.begin(115200);
    pinMode(TOUCH,INPUT);





 
}

void loop() {
 
 delay(1000);
 if (digitalRead(TOUCH))
 {
    Serial.println("MMD & SAM");

 }


}