#include <stdio.h>
//parametre olarak girilen TAM sayinin asal sayi olup olmad�g�n� belirleyen kod.

//Fonksiyon K�sm�

int asalSayiMidir(int, int);
  
int asalSayiMidir(int x, int i) {
//x= sayi i=sayi/2 olacak. ��nk� E�er say�n�n yar�s�na kadar kontrol ettiysek di�er yar�s�n� kontrol etmememize gerek yoktur.
//burda i sayisinin i/2 ye kadar olan say�lara g�re moodunu alacak.Tam b�l�nebilirli�ini kontrol edecek.
//�RN : (11,5) olsun mesela 5 e kadar hi�rinine tamb�l�nmeyecek i yi 1e ve return 1 e d�nd�rcek.Asal sayi oldugu anlas�lacak.
  
  
    if (x < 2)//eger sayi<2 olursa o sayilarda asallik aranmaz.Asal sayilar 2'den baslar.
        return 0;
        
    if (i == 1)//asal sayidir.
        return 1;
    
	if (x % i == 0)//asal sayi de�ildir.
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

