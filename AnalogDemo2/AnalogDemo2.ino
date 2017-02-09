int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

int analogPin = 5;

int serialData;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
 
  if (Serial.available() > 0) {
    serialData = Serial.read();
  }  

  if(serialData > 2) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }

    if(serialData > 6) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
  
    if(serialData > 8) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }

  Serial.println(analogRead(analogPin));
  delay(500);
}
