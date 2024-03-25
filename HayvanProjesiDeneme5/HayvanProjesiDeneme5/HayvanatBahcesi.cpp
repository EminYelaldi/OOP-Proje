// Ad: Muhammed Emin 
// Soyad: Yelaldý
// Numara: 210757029
// Bölüm: Bilgisayar Mühendisliði(ÝÖ)
// Ders: Nesneye Yönelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildiði Dönem: Bahar Dönemi
// Proje Numara: 1
// Öðretim Üyesi: Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER
#include "HayvanatBahcesi.h"
#include "Hayvan.h"                // Kullandýðým standart kütüphaneler ve class dosyalarým
#include <vector>
#include <iostream>


using namespace std; //Std isim uzayý


void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {

	hayvanlar.push_back(hayvan);                                                              //Hayvan sýnýfýndan vektör yardýmýyla deðerin sonuna eleman eklemek için kullandým.
	cout << hayvan->getAd() << " adli " << hayvan->getTur() << " hayvaný eklendi." << endl;   //Hayvan sýnýfýndan pointer yardýmýyla ad ve türü alýp ekleme yaptým.


}
void HayvanatBahcesi::hayvanlariGoster() {        

	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vektörünü tuttuðu deðerlerin boyutu kadar dönüyor.

		cout << "Ad:  " << hayvanlar[i]->getAd() << endl;
		cout <<"Tur: "<< hayvanlar[i]->getTur() << endl;   //hayvanlar vektöründeki ad, tür ve yaþ bilgilerini pointer yardýmýyla gösterdim.
		cout <<"Yas: "<< hayvanlar[i]->getYas() << endl;
		cout << "---------------------" << endl;
 }


}
void HayvanatBahcesi::hayvanYasGuncelle(string ad , int yeniYas ) {

	
	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vektörünü tuttuðu deðerlerin boyutu kadar dönüyor.

		if (hayvanlar[i]->getAd() == ad) {        

			hayvanlar[i]->Yas = yeniYas;          //Kullanýcý tarafýndan girilen adý alýp bu adýn yaþýný deðiþtirmek için yeniYas deðiþkeni kullandým.

			cout << hayvanlar[i]->getAd() << " adli hayvanin yasi " << yeniYas << " olarak guncellenmistir." << endl;

		}

	}

}
void HayvanatBahcesi::hayvanAdGuncelle(string ad ,string yeniAd) {

	for (int i = 0; i < hayvanlar.size(); i++) {   //hayvanlar vektörünü tuttuðu deðerlerin boyutu kadar dönüyor.

		if (hayvanlar[i]->getAd() == ad) {

			hayvanlar[i]->Ad = yeniAd;             //Kullanýcý tarafýndan girilen adý alýp bu adý deðiþtirmek için yeniAd deðiþkeni kullandým.

			cout << hayvanlar[i]->getAd() << " adli hayvanin adi " << yeniAd << " olarak guncellenmistir." << endl;

		}

	}



}

void HayvanatBahcesi::hayvanBesle(string ad) {


	for (int i = 0; i < hayvanlar.size(); i++) {  //hayvanlar vektörünü tuttuðu deðerlerin boyutu kadar dönüyor.

		if (hayvanlar[i]->getAd() == ad) {        //Kullanýcýnýn girdiði adý alýyor.


			cout << hayvanlar[i]->getAd() << " adli hayvan " << hayvanlar[i]->besle() << " ile beslenmiþtir." << endl;     //Hayvan sýnýfýndaki besle() fonksiyonunu çaðýrýp ad hangi hayvana ait ise ona göre besleme yapýyor. 

		}

	}
}

