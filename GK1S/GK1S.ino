#define BLYNK_PRINT Serial
#include <SPI.h>
#include <Bridge.h>
#include <BlynkSimpleYun.h>

char auth[] = "8fbbff2bc13c4fd4971c00c53582f625";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth);
  mapeoReles();
  dht11Setup();
}

void loop()
{
  Blynk.run();
}

