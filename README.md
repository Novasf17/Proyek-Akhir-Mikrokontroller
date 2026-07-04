## Nama : Neng Nova Siti Fathonah
## NIM : 23552011455
## Kelas : TIF 23 KB

## Judul Proyek
Proyek Akhir Sistem Mikrokontroler
## "Sistem Lampu Tidur Otomatis Berbasis ESP32 Menggunakan Sensor LDR dan Blynk"
## Latar Belakang dan Tujuan
Latar Belakang
Lampu sering kali masih dinyalakan dan dimatikan secara manual sehingga kurang efisien. Dengan memanfaatkan sensor cahaya (LDR) dan mikrokontroler ESP32, lampu dapat menyala secara otomatis ketika kondisi ruangan gelap dan mati saat ruangan terang. Selain itu, penggunaan Blynk memungkinkan alat terhubung ke platform Internet of Things (IoT).
Tujuan
•	Membuat sistem lampu tidur otomatis menggunakan ESP32. 
•	Menggunakan sensor LDR sebagai pendeteksi intensitas cahaya. 
•	Mengontrol LED secara otomatis berdasarkan kondisi cahaya. 
•	Mengimplementasikan koneksi IoT menggunakan Blynk. 
## Alat dan Bahan
•	ESP32 DevKit 
•	Sensor LDR (Light Dependent Resistor) 
•	LED Merah 
•	Resistor 220 Ω 
•	Kabel penghubung 
•	Wokwi Simulator 
•	Blynk IoT 
•	 Wokwi 
## Struktur dan Logika Program
Program diawali dengan menghubungkan ESP32 ke jaringan WiFi dan Blynk menggunakan Template ID dan Auth Token.
Selanjutnya ESP32 membaca nilai sensor LDR melalui pin GPIO 33.
Logika program:
•	Jika nilai sensor lebih dari 2000, maka LED akan menyala. 
•	Jika nilai sensor kurang dari atau sama dengan 2000, maka LED akan mati. 
Data nilai sensor dikirim ke Blynk menggunakan:
Blynk.virtualWrite(V0, nilaiSensor);
Blynk.virtualWrite(V1, 1);
Blynk.virtualWrite(V1, 0);
## Demonstrasi
Pada simulasi Wokwi:
•	Saat cahaya terang, sensor membaca intensitas tinggi sehingga LED mati. 
•	Saat kondisi gelap, sensor mendeteksi rendahnya cahaya sehingga LED menyala secara otomatis. 
ESP32 juga berhasil terhubung ke Blynk melalui jaringan WiFi.

## link youtube : https://youtu.be/_-y-TchipA8?si=fLQna9PhUBa0wCOy  
## Link Proyek : https://wokwi.com/projects/468314392535876609 
