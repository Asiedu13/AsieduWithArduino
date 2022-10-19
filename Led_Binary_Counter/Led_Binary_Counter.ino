// C++ code
// Variables & Objects
int pin1 = 12;
int pin2 = 10;
int pin3 = 8;
int pin4 = 7;
int delayTime = 2000;

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop()
{
  /* 
    This is a binary LED counter;
    This basically counts in binary using LEDs
    eg. 0 in binary -> 0000
        1 in binary -> 0001
        2 in binary -> 0010
        3 in binary -> 0011
        4 in binary -> 0100
     Hence the binary representation would be displayed by the LEDs
     connected to the board.
  */
/******** Print 1 ************ */
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);

  delay(delayTime);
/******** Print 2 ************ */
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);

  delay(delayTime);
/******** Print 3 ************ */
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  
  delay(delayTime);
/******** Print 4 ************ */
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, LOW);  
  
  delay(delayTime);
}
