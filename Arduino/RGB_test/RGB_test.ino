/*
  A program to test out the RGB LEDs in the opto-membrane feeder assay
*/


int bluePin = 9;    // LED connected to digital pin 9
int greenPin = 10;    // LED connected to digital pin 10
int redPin = 11;    // LED connected to digital pin 11

void setup() {
  // nothing happens in setup
}

void loop() {
  analogWrite(bluePin, 0);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 0);
  // fade in from min to max in increments of 5 points:
  for (int repeatValue = 0 ; repeatValue <= 4; repeatValue += 1) {
  // test RGB LEDs
  analogWrite(bluePin, 50);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 5);
  delay(440);
  analogWrite(bluePin, 25);
  analogWrite(redPin, 25);  
  delay(220);
  analogWrite(greenPin, 50);
  analogWrite(redPin, 0);  
  delay(220);
  analogWrite(bluePin, 5);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 50);  
  delay(440);  
  analogWrite(bluePin, 5);
  analogWrite(greenPin, 50);
  analogWrite(redPin,0);  
  delay(440);  
  }

  // fade out from max to min in increments of 5 points:
  for (int repeatValue = 0 ; repeatValue <= 8; repeatValue += 1) {
  analogWrite(bluePin, 5);
  analogWrite(greenPin, 0);
  analogWrite(redPin,50);
  delay(73);
  analogWrite(greenPin, 50);
  analogWrite(redPin,0);
  delay(73);
  analogWrite(bluePin, 50);
  analogWrite(greenPin, 0);
  delay(73);
  }
}
