// Ad: Muhammed Emin 
// Soyad: Yelald�
// Numara: 210757029
// B�l�m: Bilgisayar M�hendisli�i(��)
// Ders: Nesneye Y�nelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildi�i D�nem: Bahar D�nemi
// Proje Numara: 1
// ��retim �yesi: Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include "Hayvan.h"   // Kulland���m standart k�t�phane ve class dosyam
#include <iostream>

using namespace std; // Std isim uzay�

Hayvan::Hayvan(string adx, string turx, int yasx) {     


	Ad = adx;
	Tur = turx;                           //Yap�c� fonksiyondaki de�ikenlerin tan�mlanmas�...
	Yas = yasx;
	
}

string Hayvan::getAd() {


	return(Ad);
}

string Hayvan::getTur() {


	return(Tur);                 //Ad, t�r ve ya�� pointer yard�m�yla �a��rmak i�in olu�turdu�um fonksiyonlar... 

}

int Hayvan::getYas() {

	return(Yas);

}

string Hayvan::besle() {     //Alt classlar�(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu...

	return 0;

}


