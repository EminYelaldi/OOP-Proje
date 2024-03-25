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
#ifndef HAYVAN_H
#define HAYVAN_H


#include <iostream> // Kullandýðým standart kütüphaneler

#include <string>
using namespace std; //Std isim uzayý


class Hayvan  //Oluþturduðum Hayvan classý
{

public:

	int Yas;                     //Hayvanlarýn özelliklerini belirten deðiþkenlerim
	string Ad;
	virtual string besle();      //Alt classlarý(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu


	Hayvan(string, string, int); //Hayvan classýndaki deðiþkenleri belirlemek için kullanýlan yapýcý fonksiyon...


	
	 
	string getAd();          
	string getTur();         //Ad, tur ve yaþý pointer yardýmýyla çaðýrmak için yazdýðým deðiþkenler... 
	int getYas();
	
	
	
	

private:
	
	string Tur;     //Hayvan düzenlemede tür deðiþmeyeceði için private da kullandým.
	
};

#endif 