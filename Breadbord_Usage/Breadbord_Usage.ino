void setup() {
  // put your setup code here, to run once:
  
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);

//  For Pin 8

  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);

//  For Pin 2
  digitalWrite(2, HIGH);
  delay(200);
  digitalWrite(2, LOW);
  delay(200);

  
}
