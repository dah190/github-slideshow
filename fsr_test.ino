
const int speakPin = 3; //PD3
const int FSR = A0;//PC0

int fsrReading = 0;

void setup() {
  pinMode(speakPin, OUTPUT);
  pinMode(FSR, INPUT);
}

void loop() {
  fsrReading = analogRead(FSR);

  if (fsrReading >= 10) {
        tone(speakPin, 100);
        delay(500);
        noTone(speakPin);
        delay(2000);
  }
}
