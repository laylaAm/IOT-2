const int OUT_PIN = 4;

int buttonState = 0;

void setup()
{
  pinMode(OUT_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0) {
    buttonState = bitRead(Serial.read(), 0);
  }
  digitalWrite(OUT_PIN, buttonState);
  delay(1000);
}