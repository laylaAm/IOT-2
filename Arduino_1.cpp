// C++ code
const int inPin = 4;

int buttonState = 0;

void setup()
{
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonState = digitalRead(inPin);
  Serial.print(buttonState);
  delay(1000);
}