int redPin = A5;
float calcVal;
void setup() {
pinMode(redPin,INPUT);
Serial.begin(9600);
}

void loop() {
calcVal = (5./1023.)*analogRead(redPin);
Serial.println(calcVal);
delay(500);
}
