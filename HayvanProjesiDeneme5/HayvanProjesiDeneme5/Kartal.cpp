// Ad: Muhammed Emin 
// Soyad: Yelald�
// Numara: 210757029
// B�l�m: Bilgisayar M�hendisli�i(��)
// Ders: Nesneye Y�nelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildi�i D�nem: Bahar D�nemi
// Proje Numara: 1
// ��retim �yesi: Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER

#include "Kartal.h"    // Kulland���m class dosyam

Kartal::Kartal(string ad, string tur, int yas, int kanatGenislik) : Hayvan(ad, tur, yas) {  //Kulland���m�z yap�c� fonksiyonla beraber Hayvan s�n�f�ndaki ad, t�r ve ya� de�erlerini de ba�lad�m.

	KanatGenislik = kanatGenislik;

}
string Kartal::besle() {   //Kartala �zel besleme yapt���m besleme fonksiyonu...

	return "et";

}