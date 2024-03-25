// Ad: Muhammed Emin 
// Soyad: Yelaldý
// Numara: 210757029
// Bölüm: Bilgisayar Mühendisliði(ÝÖ)
// Ders: Nesneye Yönelik Programlama 
// Dersin Kodu: MBM104
// Dersin Verildiði Dönem: Bahar Dönemi
// Proje Numara: 1
// Öðretim Üyesi: Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER

#include "Aslan.h"          // Kullandýðým standart kütüphane ve class dosyam
#include <iostream>          

Aslan::Aslan(string ad, string tur, int yas, string renk):Hayvan(ad, tur, yas) { //Kullandýðýmýz yapýcý fonksiyonla beraber Hayvan sýnýfýndaki ad, tür ve yaþ deðerlerini de baðladým.

	Renk = renk;


}
string Aslan::besle() { //Aslana özel besleme yaptýðým besleme fonksiyonu...

	return "et";

}