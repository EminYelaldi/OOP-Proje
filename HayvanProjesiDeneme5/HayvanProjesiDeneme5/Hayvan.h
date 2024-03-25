// Ad: Muhammed Emin 
// Soyad: Yelald�
// Numara: 210757029
// B�l�m: Bilgisayar M�hendisli�i(��)
// Ders: Nesneye Y�nelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildi�i D�nem: Bahar D�nemi
// Proje Numara: 1
// ��retim �yesi: Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER
#pragma once
#ifndef HAYVAN_H
#define HAYVAN_H


#include <iostream> // Kulland���m standart k�t�phaneler

#include <string>
using namespace std; //Std isim uzay�


class Hayvan  //Olu�turdu�um Hayvan class�
{

public:

	int Yas;                     //Hayvanlar�n �zelliklerini belirten de�i�kenlerim
	string Ad;
	virtual string besle();      //Alt classlar�(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu


	Hayvan(string, string, int); //Hayvan class�ndaki de�i�kenleri belirlemek i�in kullan�lan yap�c� fonksiyon...


	
	 
	string getAd();          
	string getTur();         //Ad, tur ve ya�� pointer yard�m�yla �a��rmak i�in yazd���m de�i�kenler... 
	int getYas();
	
	
	
	

private:
	
	string Tur;     //Hayvan d�zenlemede t�r de�i�meyece�i i�in private da kulland�m.
	
};

#endif 