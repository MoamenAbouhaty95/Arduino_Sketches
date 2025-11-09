#define LED_PIN 13 // LED connected to digital pin 13

void setup()
{
  pinMode(LED_PIN, OUTPUT); // Configure pin as output
}

void loop()
{
  digitalWrite(LED_PIN, HIGH); // Turn LED on
  delay(1000);                 // Wait 1 second
  digitalWrite(LED_PIN, LOW);  // Turn LED off
  delay(1000);                 // Wait 1 second
}