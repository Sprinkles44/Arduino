int spkrPin=12;
//int duration=100;
 
int numTones = 10;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A
 

void setup() {
  tone(spkrPin,1000);
  delay(2000);
  noTone(spkrPin);
}

void loop() {

}
