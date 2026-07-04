
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

<img width="641" height="402" alt="Screenshot 2026-07-04 101400" src="https://github.com/user-attachments/assets/067202af-24b6-43e9-a8a1-703a8b39814e" />
<img width="626" height="284" alt="Screenshot 2026-07-04 101529" src="https://github.com/user-attachments/assets/05769dd7-ebcd-4717-96fc-a28255aa0d65" />
<img width="623" height="317" alt="Screenshot 2026-07-04 101446" src="https://github.com/user-attachments/assets/c3bc9da8-108b-4bce-bf75-fd289d2bc361" />
<img width="945" height="466" alt="Screenshot 2026-07-04 101255" src="https://github.com/user-attachments/assets/691533ee-b1aa-47a6-9fb0-ea3e5f0bfe6a" />
<img width="949" height="463" alt="Screenshot 2026-07-04 101901" src="https://github.com/user-attachments/assets/96c3dffa-422f-45b5-ba05-ca9c23d275a7" />
<img width="939" height="460" alt="Screenshot 2026-07-04 102817" src="https://github.com/user-attachments/assets/973a4491-e565-4797-8562-0329ec01b9c0" />
<img width="950" height="452" alt="Screenshot 2026-07-04 103213" src="https://github.com/user-attachments/assets/5192cba8-8702-4b24-9423-104ae6b8f3f7" />

## link youtube :
https://youtu.be/_-y-TchipA8?si=fLQna9PhUBa0wCOy  
## Link Proyek : 
https://wokwi.com/projects/468314392535876609 
## Link Blynk IoT :
https://blynk.cloud/dashboard/1100481/global/devices/345627 

## Kesimpulan : 
Berdasarkan hasil pengujian yang telah dilakukan, dapat disimpulkan bahwa sistem lampu tidur otomatis berbasis ESP32 menggunakan sensor LDR berhasil bekerja sesuai dengan yang dirancang. Sensor LDR mampu mendeteksi perubahan intensitas cahaya sehingga LED dapat menyala secara otomatis saat ruangan gelap dan mati saat ruangan terang. Selain itu, ESP32 juga berhasil terhubung dengan platform Blynk sebagai implementasi Internet of Things. Dengan demikian, tujuan dari proyek akhir ini telah berhasil dicapai.

