void allledFunction(){
  digitalWrite(redLed1, HIGH);
  digitalWrite(redLed2, HIGH);
  digitalWrite(amberLed1, HIGH);
  digitalWrite(amberLed2, HIGH);
  digitalWrite(greenLed, HIGH);
}
void offledFunction(){
  digitalWrite(redLed1, LOW);
  digitalWrite(redLed2, LOW);
  digitalWrite(amberLed1, LOW);
  digitalWrite(amberLed2, LOW);
  digitalWrite(greenLed, LOW);
}
void flashledFunction(){
  offledFunction();
  delay(200);
  allledFunction();
  delay(200);
  offledFunction();
  delay(200);
  allledFunction();
  delay(200);
  offledFunction();
  delay(200);
  allledFunction();
  delay(200);
  offledFunction();
  delay(200);
  allledFunction();
  delay(200);
  offledFunction();
}
