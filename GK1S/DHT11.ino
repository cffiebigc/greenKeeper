#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11
#define PIN_TEMPERATURE V2
#define PIN_HUMIDITY V3

DHT dht(DHTPIN, DHTTYPE);

void dht11Setup(){
  dht.begin();
}

BLYNK_READ(PIN_HUMIDITY)
{
  float humidity = dht.readHumidity();
  String value = String(round(humidity)) + "%";
  Blynk.virtualWrite(PIN_HUMIDITY, value);
}

BLYNK_READ(PIN_TEMPERATURE)
{
  float temperature = dht.readTemperature();
  String value = String(round(temperature)) + "°C";
  Blynk.virtualWrite(PIN_TEMPERATURE, value);
}

