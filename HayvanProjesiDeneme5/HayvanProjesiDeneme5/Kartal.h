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
#include "HayvanatBahcesi.h"           // Kullandýðým standart kütüphane ve class dosyalarým
#include <iostream>
using namespace std; //Std isim uzayý

class Kartal :public Hayvan  //Hayvan sýnýfýnýn alt dalý olduðu için Kartal sýnýfýyla Hayvan sýnýfýný baðladým.
{
public:
	Kartal(string, string, int, int); //Kartal sýnýfýndaki deðiþkenleri belirlemek için kullanýlan yapýcý fonksiyon...

	string besle();    //Kartalýn beslenme fonksiyonu


	int KanatGenislik;  //Kartala özel bir özelliðin deðiþkeni
};

