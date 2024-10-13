#define BLYNK_TEMPLATE_ID "TMPL6fLgtVFuX"
#define BLYNK_TEMPLATE_NAME "blynl"
#define BLYNK_AUTH_TOKEN "34zsK6ZUgAgTuSLFndLUyaFQjuB0yNsq" 
#define LED 17

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  pinMode(LED, OUTPUT);
}

void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V0)
{
  int buttonState = param.asInt();
  digitalWrite(LED, buttonState);
}

