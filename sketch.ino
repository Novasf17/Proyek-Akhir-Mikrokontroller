#define BLYNK_TEMPLATE_ID "TMPL6YJv3tKGM"
#define BLYNK_TEMPLATE_NAME "Proyek Lampu Tidur Otomatis"
#define BLYNK_AUTH_TOKEN "XqA30NVOFIlZ_mEab7Ub73gdfEegoQI3"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Wokwi-GUEST";
char pass[] = "";

const int sensor = 33;
const int lampu = 2;

BlynkTimer timer;

void kirimData() {
  int nilaiSensor = analogRead(sensor);

  Serial.print("Nilai Sensor = ");
  Serial.println(nilaiSensor);

  if (nilaiSensor > 2000) {
    digitalWrite(lampu, HIGH);
    Blynk.virtualWrite(V1, 1);
  } else {
    digitalWrite(lampu, LOW);
    Blynk.virtualWrite(V1, 0);
  }

  Blynk.virtualWrite(V0, nilaiSensor);
}

void setup() {
  Serial.begin(115200);

  pinMode(lampu, OUTPUT);

  Serial.println("Menghubungkan ke WiFi...");

  WiFi.begin(ssid, pass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Berhasil Terhubung!");

  Blynk.config(BLYNK_AUTH_TOKEN);

  if (Blynk.connect()) {
    Serial.println("Blynk Berhasil Terhubung!");
  } else {
    Serial.println("Gagal Terhubung ke Blynk");
  }

  timer.setInterval(1000L, kirimData);
}

void loop() {
  Blynk.run();
  timer.run();
} 
