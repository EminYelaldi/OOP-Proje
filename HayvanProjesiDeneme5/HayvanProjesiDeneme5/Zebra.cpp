// Ad: Muhammed Emin 
// Soyad: Yelald�
// Numara: 210757029
// B�l�m: Bilgisayar M�hendisli�i(��)
// Ders: Nesneye Y�nelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildi�i D�nem: Bahar D�nemi
// Proje Numara: 1
// ��retim �yesi: Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include "Zebra.h"        // Kulland���m class dosyam


Zebra::Zebra(string ad, string tur, int yas, int boy) : Hayvan(ad, tur, yas) {  //Kulland���m�z yap�c� fonksiyonla beraber Hayvan s�n�f�ndaki ad, t�r ve ya� de�erlerini de ba�lad�m.

	Boy = boy;


}

string Zebra::besle() {  //Zebraya �zel besleme yapt���m besleme fonksiyonu...

	return "ot";

}
