/*
 *                 == MASTER CODE ==
 */

int state = 0;

void setup() {
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}

void loop() {
 //state = state + 1;
 Serial.write(1); // Sends potValue to servo motor
 
 delay(100);
}
