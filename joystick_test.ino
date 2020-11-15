
const int greenLED = 1;//PD1
const int redLED = 0;//PD0
const int vert = A3;//PC3
const int horz = A2;//PC2

int xVal = 0;
int yVal = 0;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(vert, INPUT);
  pinMode(horz, INPUT);
}

void loop() {
  
  xVal = analogRead(horz);
  yVal = analogRead(vert);

  if (xVal > 0) {
    digitalWrite(greenLED, HIGH);
  }

  if (yVal > 0) {
    digitalWrite(redLED, HIGH);
  }
  
}
