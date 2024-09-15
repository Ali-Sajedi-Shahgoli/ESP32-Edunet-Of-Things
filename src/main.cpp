#include <Arduino.h>

#define LED 2

int TIME1;
bool GOT_THE_DATA;
bool led_stat = false;

void setup() {
  Serial.begin(115200);
  delay(100);
  pinMode(LED,OUTPUT);
   Serial.println("BOOTED");
 
}

void loop() {
  if (GOT_THE_DATA == false)
  {
    TIME1 = millis();
    GOT_THE_DATA = true;
  }

  if (millis() - TIME1 >= 2000)
  {
    if(led_stat == false)
    {
      digitalWrite(LED,HIGH);
      led_stat = true;
    }
    else {
      digitalWrite(LED,LOW);
      led_stat = false;
    }
    GOT_THE_DATA = false;
  }
  Serial.println("HELLO RESA");
  delay(1000);



}
