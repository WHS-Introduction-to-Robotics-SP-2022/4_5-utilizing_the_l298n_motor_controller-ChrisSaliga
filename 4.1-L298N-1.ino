/*

*/

void setup() {
    pinMode(9,OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11,OUTPUT);
    
    digitalWrite(11, HIGH);
    analogWrite(9, 255);
    delay(5000);
    analogWrite(9, 0);
}

void loop() {
    
}
