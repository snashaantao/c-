// C++ code
//
int LED= 11;
int Button= 2;
 
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
}
 
void loop()
{
  if (digitalRead(2)==LOW) {
    digitalWrite(11, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}

