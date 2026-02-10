/*
  Program to deliver a bright red light stimulus for 1 second every 10 seconds 
  along with constant dim blue light to mosquitoes in the opto-membrane feeder assay. 
*/

int bluePin = 9;    // LED connected to digital pin 9
int greenPin = 10;    // LED connected to digital pin 10
int redPin = 11;    // LED connected to digital pin 11


void setup() {
  // set dim background light to aid in mosquito flight
  analogWrite(bluePin, 1);
  analogWrite(greenPin, 0);
  analogWrite(redPin, 0);
}

void loop() {
  // bright red light for 1 second
  analogWrite(redPin, 255);
  delay(1000);
  // off for 10 seconds
  analogWrite(redPin, 0);
  delay(10000);

}
