int redLed1=13;
int redLed2=12;
int amberLed1=11;
int amberLed2=10;
int greenLed=9;
int defuse=0;
int delayTime=1000;


   
void setup() {
  pinMode(defuse, INPUT);
  pinMode(redLed1, OUTPUT);
  pinMode(redLed2, OUTPUT);
  pinMode(amberLed1, OUTPUT);
  pinMode(amberLed2, OUTPUT);
  pinMode(greenLed, OUTPUT);
  
  
}

void loop() {
  if(digitalRead(defuse) == HIGH) {
   digitalWrite(redLed1, HIGH);
   delay(delayTime);
   digitalWrite(redLed2, HIGH);
   delay(delayTime);
   digitalWrite(amberLed1, HIGH);
   delay(delayTime);
   digitalWrite(amberLed2, HIGH);
   delay(delayTime);
   digitalWrite(greenLed, HIGH);;
   delay(200);  
   flashledFunction();
  
  }
  else {
      offledFunction();
  }
  }

