int ad;
double temp;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);
  analogRead(TEMPSENSOR);
}

void loop() {
  delay(1000);
  ad = analogRead(TEMPSENSOR);
  Serial.print("ad:");
  Serial.println(ad);
  temp = ad - 273.15;
  Serial.print("temp:");
  Serial.println(temp);
  digitalWrite(GREEN_LED, true);
  delay(500);
  digitalWrite(GREEN_LED, false);
}
