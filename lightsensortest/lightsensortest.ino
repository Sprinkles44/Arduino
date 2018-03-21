int senseVal,toneVal;

void setup() {
  Serial.begin(9600);
  Serial.println("Pin A3 INPUT VALUES: ");
}

void loop() {
  senseVal=analogRead(A2);
  toneVal=senseVal/3;
  tone(A5,toneVal);
//  Serial.println(a2);
//  delay(90);
  
}
