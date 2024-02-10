#include <DHTesp.h>


// put your setup code here, to run once:
//#include <DHT.h>

//#define DHTPIN D3;
DHTesp dht(D3, DHT11);
void setup()
{
Serial.begin(115200);
delay(10);
dht.begin();
}


void loop()
{
float h = dht.readHumidity();
float t = dht.readTemperature();
Serial.print("Temperature: ");
Serial.print(t);
Serial.print(" degrees Celcius, Humidity: ");
Serial.print(h);
//Serial.println(“”);
delay(1000);
}
