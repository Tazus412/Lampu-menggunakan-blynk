/*New blynk app project
 * https://srituhobby.com
 */
 
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLXOcrVkgE"
#define BLYNK_DEVICE_NAME "Lampu"
#define BLYNK_AUTH_TOKEN "fifzZWeizjnQyWw6br7S7YhJagnL4Mll"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "realme 5i";//Enter your WIFI name
char pass[] = "tajus111";//Enter your WIFI password


BLYNK_WRITE(V0) {
  digitalWrite(D4, param.asInt());
}

void setup() {
  pinMode(D4, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  Blynk.run();
}
