#define LED 8
#define IN 7

bool state = true;

void setup() {

  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(IN, INPUT);

}

// the loop function runs over and over again forever
void loop() {
  if (state)
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  else
    digitalWrite(LED, LOW);
  if (digitalRead(IN) == HIGH)
  {
      state = !state;
      Serial.print(state, DEC);
      while (digitalRead(IN) != LOW)
        delay(1);
  }
}
