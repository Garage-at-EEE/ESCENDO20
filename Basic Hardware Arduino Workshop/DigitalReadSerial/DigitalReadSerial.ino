/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
const int pushButton = 2;

// the setup runs once when you press reset or power up the board.
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT_PULLUP);
}

// the loop routine runs over and over again forever.
void loop() {
  // read the input pin:
  int state = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(state);
  delay(1000);        // delay for 1 second.
}
