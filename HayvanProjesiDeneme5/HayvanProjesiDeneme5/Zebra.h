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
#include "Hayvan.h"
#include "HayvanatBahcesi.h"       // Kulland���m standart k�t�phane ve class dosyalar�m
#include <iostream>
using namespace std; //Std isim uzay�

class Zebra: public Hayvan // Hayvan s�n�f�n�n alt dal� oldu�u i�in Zebra s�n�f�yla Hayvan s�n�f�n� ba�lad�m.
{
public:
	Zebra(string, string, int, int); // Zebra s�n�f�ndaki de�i�kenleri belirlemek i�in kullan�lan yap�c� fonksiyon...
	
	string besle();  //Zebran�n beslenme fonksiyonu

	int Boy;         //Zebraya �zel bir �zelli�in de�i�keni

};

