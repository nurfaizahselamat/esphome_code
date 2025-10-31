int ledChannel = 0;
int freq = 5000;
int resolution = 8;
int ledPin = 26;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, 128); // 50% brightness
  delay(1000);
  analogWrite(ledPin, 0);   // off
  delay(1000);
}
