// Mapea reles de la cadena con pines de la placa
#define RELE_UNO    7
#define RELE_DOS    8
#define RELE_TRES   9
#define RELE_CUATRO 10
#define RELE_CINCO  11
#define RELE_SEIS   12
#define RELE_SIETE  13
#define RELE_OCHO   14

void mapeoReles(){
  pinMode(RELE_UNO, OUTPUT);
  pinMode(RELE_DOS, OUTPUT);
  pinMode(RELE_TRES, OUTPUT);
  pinMode(RELE_CUATRO, OUTPUT);
  pinMode(RELE_CINCO, OUTPUT);
  pinMode(RELE_SEIS, OUTPUT);
  pinMode(RELE_SIETE, OUTPUT);
  pinMode(RELE_OCHO, OUTPUT);
}

void encenderCalefactor(){
  digitalWrite(RELE_UNO, HIGH);
}

void apagarCalefactor(){
  digitalWrite(RELE_UNO, LOW);
}

void encenderHumidificador(){
  digitalWrite(RELE_DOS, HIGH);
}

void apagarHumidificador(){
  digitalWrite(RELE_DOS, LOW);
}

void encenderDeshumidificador(){
  digitalWrite(RELE_TRES, HIGH);
}

void apagarDeshumidificador(){
  digitalWrite(RELE_TRES, LOW);
}

void encenderFuenteCO2(){
  digitalWrite(RELE_CUATRO, HIGH);
}

void apagarFuenteCO2(){
  digitalWrite(RELE_CUATRO, LOW);
}

void encenderExtractor(){
  digitalWrite(RELE_CINCO, HIGH);
}

void apagarExtractor(){
  digitalWrite(RELE_CINCO, LOW);
}

void encenderVentilacion(){
  digitalWrite(RELE_SEIS, HIGH);
}

void apagarVentilacion(){
  digitalWrite(RELE_SEIS, LOW);
}

void encenderLuz(){
  digitalWrite(RELE_SIETE, HIGH);
}

void apagarLuz(){
  digitalWrite(RELE_SIETE, LOW);
}

void encenderBombaRiego(){
  digitalWrite(RELE_OCHO, HIGH);
}

void apagarBombaRiego(){
  digitalWrite(RELE_OCHO, LOW);  
}

