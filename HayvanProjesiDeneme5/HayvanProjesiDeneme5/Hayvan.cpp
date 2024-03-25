// Ad: Muhammed Emin 
// Soyad: Yelaldý
// Numara: 210757029
// Bölüm: Bilgisayar Mühendisliði(ÝÖ)
// Ders: Nesneye Yönelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildiði Dönem: Bahar Dönemi
// Proje Numara: 1
// Öðretim Üyesi: Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER


#include "Hayvan.h"   // Kullandýðým standart kütüphane ve class dosyam
#include <iostream>

using namespace std; // Std isim uzayý

Hayvan::Hayvan(string adx, string turx, int yasx) {     


	Ad = adx;
	Tur = turx;                           //Yapýcý fonksiyondaki deðikenlerin tanýmlanmasý...
	Yas = yasx;
	
}

string Hayvan::getAd() {


	return(Ad);
}

string Hayvan::getTur() {


	return(Tur);                 //Ad, tür ve yaþý pointer yardýmýyla çaðýrmak için oluþturduðum fonksiyonlar... 

}

int Hayvan::getYas() {

	return(Yas);

}

string Hayvan::besle() {     //Alt classlarý(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu...

	return 0;

}


