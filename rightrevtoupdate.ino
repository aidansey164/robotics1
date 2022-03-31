// Define pin which regulates direction for right pin
#define PIN_R_Motor_Direction 8 /* Range: LOW (= backwards), HIGH (= forwards) */

// Define pin for speed regulation of right motor
#define PIN_R_Motor_Speed 6 /* Range: 0 to 255 */

// Define pin which en-/disables information transfer to motor(s)
#define PIN_Motor_STBY 3 /* Range: LOW (= no data transfer), HIGH (= data transfer) */

void rightRev()
{
  // Set pin mode to output, as we are outputing data to the pins
  pinMode(PIN_R_Motor_Direction, OUTPUT);
  pinMode(PIN_R_Motor_Speed, OUTPUT);
  pinMode(PIN_Motor_STBY, OUTPUT);

  // Enable the receiving of inputs by giving STBY pin 5V
  digitalWrite(PIN_Motor_STBY, HIGH);

  // Tell right motor to go backwards with max speed 255
  digitalWrite(PIN_R_Motor_Direction, LOW);
  analogWrite(PIN_R_Motor_Speed, 255);

  // Go backward for 1s // in millis
  delay(1000);

  // Tell right motor to stop
  digitalWrite(PIN_R_Motor_Direction, LOW);
  analogWrite(PIN_R_Motor_Speed, 0);
}

void loop()
{
}
