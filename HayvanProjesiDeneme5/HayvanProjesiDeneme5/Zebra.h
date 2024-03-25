// Ad: Muhammed Emin 
// Soyad: Yelaldý
// Numara: 210757029
// Bölüm: Bilgisayar Mühendisliði(ÝÖ)
// Ders: Nesneye Yönelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildiði Dönem: Bahar Dönemi
// Proje Numara: 1
// Öðretim Üyesi: Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER
#pragma once
#include "Hayvan.h"
#include "HayvanatBahcesi.h"       // Kullandýðým standart kütüphane ve class dosyalarým
#include <iostream>
using namespace std; //Std isim uzayý

class Zebra: public Hayvan // Hayvan sýnýfýnýn alt dalý olduðu için Zebra sýnýfýyla Hayvan sýnýfýný baðladým.
{
public:
	Zebra(string, string, int, int); // Zebra sýnýfýndaki deðiþkenleri belirlemek için kullanýlan yapýcý fonksiyon...
	
	string besle();  //Zebranýn beslenme fonksiyonu

	int Boy;         //Zebraya özel bir özelliðin deðiþkeni

};

