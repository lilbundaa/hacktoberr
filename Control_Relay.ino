
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
/// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "Z1r0gc9sZ6tSNfRIKzrXwP1iBSlUnzhD";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "pw nya gampil";
char pass[] = "bismillah123";
void setup()
{
  // Debug console
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
 
}
void loop()
{
  Blynk.run();
}
