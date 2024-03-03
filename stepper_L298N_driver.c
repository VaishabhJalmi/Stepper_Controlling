#include 

const int stepsPerRevolution = 200;  
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  
  myStepper.setSpeed(50);
  
  Serial.begin(9600);

void loop() {
  // step one for one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(400);

  // step one for other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(400);
}
