boolean led_stat;
int ad;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  led_stat = false;
  Serial.begin(9600);
}

void loop() {
  digitalWrite(RED_LED, led_stat);
  digitalWrite(GREEN_LED, !led_stat);
  ad = analogRead(A7);
  Serial.println(ad);
  led_stat = !led_stat;
  delay(100);
}
