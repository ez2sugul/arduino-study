int redLEDPin = 8;
int greenLEDPin = 9;
int blueLEDPin = 10;
 
int redSwitchPin = 2;
int greenSwitchPin = 3;
int blueSwitchPin = 4;
int initSwitchPin = 5;
 
int red = 0;
int blue = 0;
int green = 0;
 
void setup()
{
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT); 
  pinMode(redSwitchPin, INPUT_PULLUP);
  pinMode(greenSwitchPin, INPUT_PULLUP);
  pinMode(blueSwitchPin, INPUT_PULLUP);
  pinMode(initSwitchPin, INPUT_PULLUP);
}
 
void loop()
{
  if (digitalRead(initSwitchPin) == LOW) 
  {
    red = 0;
    blue = 0;
    green = 0;
  }
  if (digitalRead(redSwitchPin) == LOW)
  {
    red ++;
    if (red > 255) red = 0;
  }
  if (digitalRead(greenSwitchPin) == LOW)
  {
    green ++;
    if (green > 255) green = 0;
  }
  if (digitalRead(blueSwitchPin) == LOW)
  {
    blue ++;
    if (blue > 255) blue = 0;
   }
  analogWrite(redLEDPin, red);
  analogWrite(greenLEDPin, green);
  analogWrite(blueLEDPin, blue); 
  delay(10);
}
