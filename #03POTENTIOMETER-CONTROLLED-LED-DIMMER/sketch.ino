int potVal;
int ledbright;
float calcVal;

void setup() {
pinMode(9, OUTPUT);
pinMode(A5, INPUT);
Serial.begin(9600);

}

void loop() {
calcVal = analogRead(A5);
ledbright = map(calcVal,0,1023,0,255);
analogWrite(9,ledbright);
Serial.println(calcVal);
delay(1000);


}
