const int speakPin = A1;
long com_choice = 0;

void setup() {
  pinMode(speakPin,OUTPUT);

}

void loop() {
  //random number between 1 and 4 (4 excluded)
  com_choice = random(1,4);

  //Commands
  switch (com_choice) {
    
    case 1: //FSR
        tone(speakPin, 100);
        delay(500);
        noTone(speakPin);
        delay(2000);
      break;
      
    case 2: //JOYSTICK
        tone(speakPin, 200);
        delay(500);
        noTone(speakPin);
        delay(500);
        tone(speakPin, 200);
        delay(500);
        noTone(speakPin);
        delay(2000);
      break;
      
    case 3: //SOUND
        tone(speakPin, 300);
        delay(500);
        noTone(speakPin);
        delay(500);
        tone(speakPin, 300);
        delay(500);
        noTone(speakPin);
        delay(500);
        tone(speakPin, 300);
        delay(500);
        noTone(speakPin);
        delay(2000);
      break;
  }
}
