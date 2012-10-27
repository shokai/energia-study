boolean led_stat;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  led_stat = false;
}

void loop() {
  digitalWrite(RED_LED, led_stat);
  digitalWrite(GREEN_LED, !led_stat);
  led_stat = !led_stat;
  delay(1000);
}
