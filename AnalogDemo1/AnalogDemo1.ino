const int ledPin1 = 2;
const int ledPin2 = 3;
const int ledPin3 = 4;

const int analogPin = 5;

int sensorValue;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
 
  sensorValue = analogRead(analogPin);

  if(sensorValue > 200) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

    if(sensorValue > 600) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
  
    if(sensorValue > 800) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }
}
