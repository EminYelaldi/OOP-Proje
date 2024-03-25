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
#ifndef HAYVANATBAHCES�_H
#define HAYVANATBAHCES�_H
#include "Hayvan.h"
#include <vector>          // Kulland���m standart k�t�phaneler ve class dosyam
#include <iostream>

using namespace std; //Std isim uzay�

class HayvanatBahcesi //Olu�turdu�um HayvanatBahcesi class�
{

public:

	vector <Hayvan*> hayvanlar;            //Kullan�c� taraf�ndan girilen de�erleri tutmak ve �e�itli i�lemleri yapmak i�in vekt�r kulland�m.

	void hayvanEkle(Hayvan* hayvan);       //Hayvan eklemek i�in kullan�lan hayvanEkle fonksiyonu (Hayvan class�ndan pointer yard�m�yla bilgileri al�yor...)
	
	void hayvanlariGoster();               //Eklenen hayvanlar� g�stermek i�in kullan�lan fonksiyon.

	void hayvanYasGuncelle(string, int);   //Ekledi�imiz hayvanlar�n ya��n� d�zeltmek i�in kullan�lan foksiyon. 

	void hayvanBesle(string);              //Alt classlar�(Aslan,Zebra,Kartal) kapsayan besleme fonksiyonu...

	void hayvanAdGuncelle(string, string); //Ekledi�imiz hayvanlar�n ad�n� d�zeltmek i�in kullan�lan foksiyon. 
};

#endif 
