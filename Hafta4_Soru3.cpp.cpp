#include <stdio.h>
//3- Kullanýcýnýn klavyeden girdiði metin içerisindeki büyük harfleri küçüðe, küçük harfleri büyüðe çeviren program kodunu yazýnýz. 
//(ASCI tablosundaki matematiksel hesap yani büyük-küçük harf arasýndaki indeks farký kullanýlarak yapýlacaktýr.)
//NOT: Sorular strlen, strchr, strcpy, strcmp vb. gibi hazýr fonksiyonlar kullanýlmadan yapýlacaktýr.
//Girilen Metindeki Kücük harfleri Büyük, Büyük harfleri küçüðe dönüþtüren kod.
 
int main() {
    
char metin[500];
int i = 0;

    printf("Bir Metin Giriniz : \n");
    gets(metin);
    
    int degisim= 'a' - 'A';

    while (metin[i] != '\0') {
    	
        if (metin[i] >= 'A' && metin[i] <= 'Z') {
            metin[i] += degisim;
        } 
		else if (metin[i] >= 'a' && metin[i] <= 'z') {
            metin[i] -= degisim;
        }
        printf("%c", metin[i]);
        i++;
    }

    return 0;
}

