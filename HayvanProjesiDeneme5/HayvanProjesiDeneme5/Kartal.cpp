// Ad: Muhammed Emin 
// Soyad: Yelaldý
// Numara: 210757029
// Bölüm: Bilgisayar Mühendisliði(ÝÖ)
// Ders: Nesneye Yönelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildiði Dönem: Bahar Dönemi
// Proje Numara: 1
// Öðretim Üyesi: Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER

#include "Kartal.h"    // Kullandýðým class dosyam

Kartal::Kartal(string ad, string tur, int yas, int kanatGenislik) : Hayvan(ad, tur, yas) {  //Kullandýðýmýz yapýcý fonksiyonla beraber Hayvan sýnýfýndaki ad, tür ve yaþ deðerlerini de baðladým.

	KanatGenislik = kanatGenislik;

}
string Kartal::besle() {   //Kartala özel besleme yaptýðým besleme fonksiyonu...

	return "et";

}