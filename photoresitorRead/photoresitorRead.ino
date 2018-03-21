int a0;
int ambient[], amUp,amLow;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT_PULLUP);
  collectAmbient();
  Serial.println("Input pin A0 values: \n");
}

void loop() {  
  Serial.write(a0);
}

void collectAmbient() {
  a0=analogRead(A0);
  int i=0;
  int sum=0;
  int atd=400; // Ambient light test duration. Number of values collected.
  for i<=atd {
    ambient[i]=a0;
    sum=sum+a0;
    i++;
  }
  int avg=sum/atd;
  int sns=40; // Sensitivity of detectecting motion.
  amUp =avg+sns; // Upper bound of ambient light
  amLow =avg-sns; // Lower bound of ambient light
  Serial.println("Ambient light readings:");
  Serial.println(a0);
  Serial.print("Ambient average: "); Serial.println(avg);
  Serial.print("Lower Ambient bound: "); Serial.println(ambLow);
  Serial.print("Upper Ambient bound: "); Serial.println(amUp);
}



