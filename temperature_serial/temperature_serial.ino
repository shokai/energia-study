int ad;
double temp;
bool led_stat = false;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);
  analogReference(INTERNAL1V5);
  // analogReference(DEFAULT);
  analogRead(TEMPSENSOR);
}

void loop() {
  delay(1000);
  ad = analogRead(TEMPSENSOR);
  Serial.print("ad:");
  Serial.println(ad);

  temp = 1.5/1024*(ad-673)/0.00355;
  Serial.print("temp:");
  Serial.println(temp);

  digitalWrite(GREEN_LED, led_stat);
  led_stat = !led_stat;
}
