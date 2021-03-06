import processing.serial.*;

Serial myPort;

float fillValue = 0.0f;

void setup() {
  size(800, 600);
  
  myPort = new Serial(this, Serial.list()[0], 9600);
  myPort.bufferUntil('\n');   // Start listening for serial messages
}

void  draw() {
  fill(fillValue);
  ellipse(width/2, height/2, width/2, height/2);
}

void serialEvent (Serial myPort) {
  String inString = myPort.readStringUntil('\n');
  inString = trim(inString);
  println(inString);

  fillValue = (255 * Float.parseFloat(inString) / 1024);
  
  if (mousePressed) {
    myPort.write(8);
  } else if (!mousePressed) {
    myPort.write(0); 
  }
}