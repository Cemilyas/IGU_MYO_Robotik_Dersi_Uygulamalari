#include <DHT.h>

#define DHTPIN 2       
#define DHTTYPE DHT11  

DHT dht(DHTPIN, DHTTYPE);
int mq2Pin = A0;        

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();  
  float humidity = dht.readHumidity();        
  int gasValue = analogRead(mq2Pin);          

  Serial.print("Sıcaklık: ");
  Serial.print(temperature);
  Serial.print("°C\tNem: "); 
  Serial.print(humidity);
  Serial.print("%\tGaz Değeri: ");
  Serial.println(gasValue);

  delay(2000);
}