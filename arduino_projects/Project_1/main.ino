// Name of project: Traffic light
// Author: Nikita Cherevatenko


int led_red = 2;
int led_yellow = 3;
int led_green = 4;
boolean ledOn = HIGH;
void setup()
{
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}
void loop()
{
  digitalWrite(led_red, HIGH);
  delay(2000); // Wait for 10000 millisecond(s)
  digitalWrite(led_yellow, HIGH);
  delay(700);
  digitalWrite(led_red, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_green, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  for (int i = 0; i<6; i++)
  {
    ledOn = !ledOn;
    digitalWrite(led_green, ledOn);
    delay(500);
  }
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, HIGH);
  delay(700);
  digitalWrite(led_yellow, LOW);
}

