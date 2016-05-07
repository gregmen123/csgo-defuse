int[] ledPins = [13, 12, 11, 10, 9];
//  represents:  r1  r2  a1  a2 g1
// how to use: instead of pinMode(red1, OUTPUT) (for example), use pinMode(ledPins[0])
int defusePin = 0;
int delayTime = 1000;
int currentStage = 0;

void setup() {
  pinMode(defuse, INPUT);
  pinMode(ledPins[0], OUTPUT);
  pinMode(ledPins[1], OUTPUT);
  pinMode(ledPins[2], OUTPUT);
  pinMode(ledPins[3], OUTPUT);
  pinMode(ledPins[4], OUTPUT);
}

void loop() {

  if(digitalRead(defuse) == HIGH) {
    if(currentStage < 5) {
      setProgress(currentStage ++);
      delay(delayTime);
    }
    else {
      flashAll(5, delayTime / 2);
    }
  }
  else {
    currentStage = 0;
    setProgress(0);
  }
  
}

void flashAll(int times, int _delayTime) {
  for(int i = 0; i < times; i ++) {
    setProgress(5);
    delay(_delayTime);
    setProgress(0);
    delay(_delayTime);
  }
}

void setProgress(int stage) { // setProgress(0) turns all off, setProgress(5) turns all on
  for(int i = 0; i < 5; i ++) {
    if(i < stage) {
      digitalWrite(ledPins[i], HIGH);
    }
    else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
