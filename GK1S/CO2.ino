#define PIN_CO2 V4

BLYNK_READ(PIN_CO2)
{
  // lectura de CO2 desde sensor
  String value = "NaN";
  Blynk.virtualWrite(PIN_CO2, value);
}

