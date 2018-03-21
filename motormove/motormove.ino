/* Two motor arm 
 *  Oscar Alvarez
 */

void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(2,INPUT);
  pinMode(A0,OUTPUT);
  pinMode(A3,OUTPUT);
  Serial.println("Object On\n");
}

void loop() {
  int buttonval=digitalRead(2);
  if (buttonval>LOW) {
    int mot1spd=500; // Controls motor 1's speed
    int mot2spd=400; // Controls motor 2's speed
    analogWrite(A0,mot1spd);
    analogWrite(A3,mot2spd);
  }

}
