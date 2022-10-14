/*
 *                 == MASTER CODE ==
 */


int state = 0;

void setup() {
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}

void loop() {
  state = Serial.read(); // Reads the data from the serial port  
  Serial.println(state);
  delay(100);
}
