#include <Servo.h>

Servo servo;
boolean led_stat;
int ad;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  led_stat = false;
  Serial.begin(9600);
  servo.attach(P2_3);
}

void loop() {
  digitalWrite(RED_LED, led_stat);
  digitalWrite(GREEN_LED, !led_stat);
  led_stat = !led_stat;
  servo.write(led_stat ? 0 : 180);
  delay(1000);
}
