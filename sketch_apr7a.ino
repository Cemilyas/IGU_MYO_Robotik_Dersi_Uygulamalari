  const int analogPin = A0;   // Analog giriş (potansiyometre/sensör)
const int ledPin = 5;       // PWM çıkışı (LED için)
const int rolePin = 7;      // Dijital çıkış (Röle kontrol)



int okunanDeger = 0;        // A0'dan okunan değer
int parlaklik = 0;          // PWM değeri (0 - 255)

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(rolePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  okunanDeger = analogRead(analogPin);         // 0 - 1023
  parlaklik = map(okunanDeger, 0, 1023, 0, 255); // PWM'e ölçekleme

  analogWrite(ledPin, parlaklik);              // LED parlaklığı ayarla

  // Röle kontrolü: 75 <= değer <= 150 aralığında aktif
  if (parlaklik >= 75 && parlaklik <= 150) 
  {
    digitalWrite(rolePin, LOW);  // Röle aç
  } 
  else 
  {
    digitalWrite(rolePin, HIGH);   // Röle kapat
  }

  // Seri monitör üzerinden takip
  Serial.print("Analog Değer: ");
  Serial.print(okunanDeger);
  Serial.print(" | PWM: ");
  Serial.println(parlaklik);

  delay(100);
}
