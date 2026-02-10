/*
  Simple program to deliver a dim blue light during the acclimation period when running
  the opto-membrane feeder assay. 
*/

int bluePin = 9;    // LED connected to digital pin 9
int greenPin = 10;    // LED connected to digital pin 10
int redPin = 11;    // LED connected to digital pin 11


void setup() {
  // set dim blue background light to aid in mosquito flight
  analogWrite(bluePin, 1);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 0);
}

void loop() {
  // nothing

}
