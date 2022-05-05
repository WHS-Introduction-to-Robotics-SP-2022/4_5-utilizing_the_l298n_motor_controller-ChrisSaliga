int x=0;
int y=1;

void setup() {
  pinMode(9,OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11,OUTPUT);
    
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    
      for(x=0; x<=255;x++){
      analogWrite(9,x);
      delay(20);
      }
      
      for(x=255; x>=0;x--){
      analogWrite(9,x);
      delay(20);
      }
}

void loop() {
    
}
