int led_pin = 13;
void setup() 
{
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600); // Seri haberleşmeyi başlat (baud rate: 9600)
}

void loop() 
{
  if (Serial.available() > 0) // Seri porttan veri al
  {
    char receivedChar = Serial.read();

    if (receivedChar == 'S' || receivedChar == 'A')  // Alınan karakter 'H' ise Seri port ekranına H Bilgisi Geldi yaz
    {
      Serial.println("H Bilgisi Geldi");
      digitalWrite(led_pin, HIGH); 
      delay(1000); // 1000 milisaniye (1 saniye) bekle
    }
    else if (receivedChar == 'M' || receivedChar == 'N') // Alınan karakter 'L' ise Seri port ekranına L Bilgisi Geldi yaz
    {
      Serial.println("L Bilgisi Geldi");
      digitalWrite(led_pin, LOW); 
      delay(1000);  // turn the LED off by making the voltage LOW
    
    }
  }
}
