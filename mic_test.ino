const int speakPin = 3; //PD3
const int greenLED = 1;//PD1
const int redLED = 0;//PD0
const int micGate = 10;//PB2
const int micEn = A1;//PC1

int act_choice = 0;

void soundISR() {
  int pin_val;
  pin_val = digitalRead(micGate);
  digitalWrite(greenLED, pin_val);
}

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(micGate, INPUT);
  pinMode(micEn, INPUT);
  attachInterrupt(5, soundISR, CHANGE);
}

void loop() {
  //act_choice = digitalRead(FSR);
  act_choice= analogRead(micEn);
  Serial.print("Status: ");
  if(act_choice <= 10)
  {
    digitalWrite(redLED, HIGH);
  }
  else if( (act_choice > 10) && ( act_choice <= 30) )
  {
        tone(speakPin, 100);
        delay(500);
        noTone(speakPin);
        delay(2000);
  }

  // pause for 1 second
  delay(1000);
}
