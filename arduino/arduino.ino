#include <dht.h>
#define DHTPIN 2
dht DHT;
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(Temperatura());
}

int Temperatura()
{
  DHT.read11(DHTPIN);
  int Temperatura = DHT.temperature;
  delay(500);
  return Temperatura;
}
