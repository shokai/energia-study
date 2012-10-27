boolean led_stat;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  led_stat = false;
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()){
    Serial.print("echo : ");
    Serial.write(Serial.read());
    Serial.println("");
  }
  digitalWrite(RED_LED, led_stat);
  digitalWrite(GREEN_LED, !led_stat);
  Serial.println(led_stat ? "RED" : "GREEN");
  led_stat = !led_stat;
  delay(1000);
}
