#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Dapetin tokennya di email kamu
char auth[] = "J2xMqsSgE0WFlQh2HBTA1ufzTiBCoIqp";

// id dan password internet kamu
char ssid[] = "myhome";
char pass[] = "indygo567";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
