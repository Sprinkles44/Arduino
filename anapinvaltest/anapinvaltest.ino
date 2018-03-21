int a0, a1, a2, a3, a4, a5;

void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(2,INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  Serial.println("Device is live.\n\n");
}

void loop() {
  a0=analogRead(A0);
  a1=analogRead(A1);
  a2=analogRead(A2);
  a3=analogRead(A3);
  a4=analogRead(A4);
  a5=analogRead(A5);
  digitalWrite(4,HIGH);
  int refresh=digitalRead(2);
  if (refresh>LOW){
    printVals();
    delay(2000);
  }
}

void printVals() {
  Serial.println("Analog pin input value readings: \n");
  Serial.print("A0: ");
  Serial.println(a0);
  Serial.print("A1: ");
  Serial.println(a1);
  Serial.print("A2: ");
  Serial.println(a2);   
  Serial.print("A3: ");
  Serial.println(a3);
  Serial.print("A4: ");
  Serial.println(a4);
  Serial.print("A5: ");
  Serial.println(a5);
  Serial.println("\n\n\n");
}

