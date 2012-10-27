void setup() {
}

void loop() {
  for(unsigned char i = 0; i < 255; i++){
    analogWrite(GREEN_LED, i);
    analogWrite(RED_LED, 255-i);
    delay(3);
  }
  for(unsigned char i = 255; i > 0; i--){
    analogWrite(GREEN_LED, i);
    analogWrite(RED_LED, 255-i);
    delay(3);
  }
}
