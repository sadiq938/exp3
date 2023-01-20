#define BLYNK_TEMPLATE_ID"fghjkdgdgtghd";
#define BLYNK_DEVICE_NAME"fghjd";
#define BLYNK_AUTH_TOKEN"ddtyd2d8dgh";

#define BLYNK_PRINT Serial
#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char auth[]=BLYNK_AUTH_TOKEN;
char ssid[]="abdul sadiq";
char pass[]="9380110926";

BLYNK_WRITE(V1){
  digitalWrite(V1,param.asInt());
}
BLYNK_WRITE(V2)
{
  digitalWrite(V2,param.asInt());
}
void setup()
{
  Serial.begin(9600);
  delay(100);
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  Blynk.begin(auth,ssid,pass);
}
void loop()
{
  Blynk.run();
}
