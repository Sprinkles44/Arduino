int a0;
int spkrPin=12;

void setup() {
  pinMode(A0,INPUT);

}

void loop() {
  a0=analogRead(A0);
  tone(spkrPin,a0);

}
