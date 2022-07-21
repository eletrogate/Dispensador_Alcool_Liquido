#define pinSensor 2
#define pinBomba 3

void setup() {
  pinMode(pinSensor,INPUT);
  pinMode(pinBomba,OUTPUT);
}

void loop() {
  !digitalRead(pinSensor)? digitalWrite(pinBomba, HIGH) : digitalWrite(pinBomba, LOW);
}