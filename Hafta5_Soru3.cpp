#include <stdio.h>
//parametre olarak girilen TAM sayinin asal sayi olup olmadýgýný belirleyen kod.

//Fonksiyon Kýsmý

int asalSayiMidir(int, int);
  
int asalSayiMidir(int x, int i) {
//x= sayi i=sayi/2 olacak. çünkü Eðer sayýnýn yarýsýna kadar kontrol ettiysek diðer yarýsýný kontrol etmememize gerek yoktur.
//burda i sayisinin i/2 ye kadar olan sayýlara göre moodunu alacak.Tam bölünebilirliðini kontrol edecek.
//ÖRN : (11,5) olsun mesela 5 e kadar hiçrinine tambölünmeyecek i yi 1e ve return 1 e döndürcek.Asal sayi oldugu anlasýlacak.
  
  
    if (x < 2)//eger sayi<2 olursa o sayilarda asallik aranmaz.Asal sayilar 2'den baslar.
        return 0;
        
    if (i == 1)//asal sayidir.
        return 1;
    
	if (x % i == 0)//asal sayi deðildir.
        return 0;
    
	return asalSayiMidir(x, i - 1);
}

//UYGULAMA KISMI
int main() {
	
    int sayi;
		printf("Asal Sayi Kontrolu yapmak istediginiz sayiyi giriniz : ");
		scanf("%d",&sayi);
		
    int sonuc = asalSayiMidir(sayi, sayi / 2);
    
    if (sonuc == 0)
        printf("\n\nGirdiginiz %d sayisi asal sayi DEGILDIR ! ! !\n", sayi);
    else
        printf("\n\nGirdiginiz %d sayisi ASAL sayidir. :)\n", sayi);
    return 0;
}

