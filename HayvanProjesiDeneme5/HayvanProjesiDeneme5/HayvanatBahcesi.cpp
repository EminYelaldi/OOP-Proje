// Ad: Muhammed Emin 
// Soyad: Yelald�
// Numara: 210757029
// B�l�m: Bilgisayar M�hendisli�i(��)
// Ders: Nesneye Y�nelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildi�i D�nem: Bahar D�nemi
// Proje Numara: 1
// ��retim �yesi: Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER
#include "HayvanatBahcesi.h"
#include "Hayvan.h"                // Kulland���m standart k�t�phaneler ve class dosyalar�m
#include <vector>
#include <iostream>


using namespace std; //Std isim uzay�


void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {

	hayvanlar.push_back(hayvan);                                                              //Hayvan s�n�f�ndan vekt�r yard�m�yla de�erin sonuna eleman eklemek i�in kulland�m.
	cout << hayvan->getAd() << " adli " << hayvan->getTur() << " hayvan� eklendi." << endl;   //Hayvan s�n�f�ndan pointer yard�m�yla ad ve t�r� al�p ekleme yapt�m.


}
void HayvanatBahcesi::hayvanlariGoster() {        

	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vekt�r�n� tuttu�u de�erlerin boyutu kadar d�n�yor.

		cout << "Ad:  " << hayvanlar[i]->getAd() << endl;
		cout <<"Tur: "<< hayvanlar[i]->getTur() << endl;   //hayvanlar vekt�r�ndeki ad, t�r ve ya� bilgilerini pointer yard�m�yla g�sterdim.
		cout <<"Yas: "<< hayvanlar[i]->getYas() << endl;
		cout << "---------------------" << endl;
 }


}
void HayvanatBahcesi::hayvanYasGuncelle(string ad , int yeniYas ) {

	
	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vekt�r�n� tuttu�u de�erlerin boyutu kadar d�n�yor.

		if (hayvanlar[i]->getAd() == ad) {        

			hayvanlar[i]->Yas = yeniYas;          //Kullan�c� taraf�ndan girilen ad� al�p bu ad�n ya��n� de�i�tirmek i�in yeniYas de�i�keni kulland�m.

			cout << hayvanlar[i]->getAd() << " adli hayvanin yasi " << yeniYas << " olarak guncellenmistir." << endl;

		}

	}

}
void HayvanatBahcesi::hayvanAdGuncelle(string ad ,string yeniAd) {

	for (int i = 0; i < hayvanlar.size(); i++) {   //hayvanlar vekt�r�n� tuttu�u de�erlerin boyutu kadar d�n�yor.

		if (hayvanlar[i]->getAd() == ad) {

			hayvanlar[i]->Ad = yeniAd;             //Kullan�c� taraf�ndan girilen ad� al�p bu ad� de�i�tirmek i�in yeniAd de�i�keni kulland�m.

			cout << hayvanlar[i]->getAd() << " adli hayvanin adi " << yeniAd << " olarak guncellenmistir." << endl;

		}

	}



}

void HayvanatBahcesi::hayvanBesle(string ad) {


	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vekt�r�n� tuttu�u de�erlerin boyutu kadar d�n�yor.

		if (hayvanlar[i]->getAd() == ad) {        //Kullan�c�n�n girdi�i ad� al�yor.


			cout << hayvanlar[i]->getAd() << " adli hayvan " << hayvanlar[i]->besle() << " ile beslenmi�tir." << endl;     //Hayvan s�n�f�ndaki besle() fonksiyonunu �a��r�p ad hangi hayvana ait ise ona g�re besleme yap�yor. 

		}

	}
}

