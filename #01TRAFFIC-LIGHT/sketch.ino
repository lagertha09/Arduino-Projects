int redLed = 7;
int yellowLed = 8;
int greenLed = 9;

void setup() {
pinMode(redLed, OUTPUT);
pinMode(yellowLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop() {
digitalWrite(redLed, HIGH);
delay(500);
digitalWrite(redLed, LOW);
delay(500);

digitalWrite(yellowLed, HIGH);
delay(200);
digitalWrite(yellowLed, LOW);
delay(400);

digitalWrite(greenLed, HIGH);
delay(500);
digitalWrite(greenLed, LOW);
delay(500);
}
