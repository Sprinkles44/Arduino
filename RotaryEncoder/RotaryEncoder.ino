#define CLK_x 9
#define DT_x 8
#define CLK_y 4
#define DT_y 3

int counter = 0; 
int xState, xLastState;  
int yState, yLastState;

void setup() { 
  pinMode (CLK_x,INPUT);
  pinMode (DT_x,INPUT);
  pinMode (CLK_y,INPUT);
  pinMode (DT_y,INPUT);
  
  Serial.begin(9600);
  
  xLastState = digitalRead(CLK_x);
  yLastState = digitalRead(CLK_y);
} 

void loop() { 
  xState = digitalRead(CLK_x);
  yState = digitalRead(CLK_y);
  
  if (xState != xLastState){     
    if (digitalRead(DT_x) != xState) { 
      Serial.println("x,1;");
    } else {
      Serial.println("x,-1;");
    }
  } 
  xLastState = xState;
  
  if (yState != yLastState){     
    if (digitalRead(DT_y) != yState) { 
      Serial.println("y,1;");
    } else {
      Serial.println("y,-1;");
    }
  } 
  yLastState = yState;
}


