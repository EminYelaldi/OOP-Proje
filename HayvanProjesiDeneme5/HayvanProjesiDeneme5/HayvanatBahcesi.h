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
#ifndef HAYVANATBAHCESÝ_H
#define HAYVANATBAHCESÝ_H
#include "Hayvan.h"
#include <vector>          // Kullandýðým standart kütüphaneler ve class dosyam
#include <iostream>

using namespace std; //Std isim uzayý

class HayvanatBahcesi //Oluþturduðum HayvanatBahcesi classý
{

public:

	vector <Hayvan*> hayvanlar;            //Kullanýcý tarafýndan girilen deðerleri tutmak ve çeþitli iþlemleri yapmak için vektör kullandým.

	void hayvanEkle(Hayvan* hayvan);       //Hayvan eklemek için kullanýlan hayvanEkle fonksiyonu (Hayvan classýndan pointer yardýmýyla bilgileri alýyor...)
	
	void hayvanlariGoster();               //Eklenen hayvanlarý göstermek için kullanýlan fonksiyon.

	void hayvanYasGuncelle(string, int);   //Eklediðimiz hayvanlarýn yaþýný düzeltmek için kullanýlan foksiyon. 

	void hayvanBesle(string);              //Alt classlarý(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu...

	void hayvanAdGuncelle(string, string); //Eklediðimiz hayvanlarýn adýný düzeltmek için kullanýlan foksiyon. 
};

#endif 
