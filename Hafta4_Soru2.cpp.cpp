#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//2- Kullanýcýnýn klavyeden girdiði metin içerisinde, yine kullanýcýnýn girdiði kelimenin olup olmadýðýný bulan, varsa hangi pozisyonda olduðunu döndüren program kodunu yazýnýz.
//Klavyeden girilen metin içerisinde yine klavyeden girilen kelimenin var olup olmaddýgýna bak
//Varsa hangi pozisyonda oldugunu döndüren kod.
int ascii(char harf){
  return (harf>= 97 && harf<= 122) ||(harf>= 65 && harf<= 90);
}
int main(){
	int i,kelimeSayac=0,harfSayac=0;
	char metin[900];
	char arananKelime[20];
printf("\nIcinde kelime arayacaginiz metni yaziniz : \n");
gets(metin);

printf("Girdiginiz metinde aramak istediginiz kelimeyi yaziniz:\n");
gets(arananKelime);

for(int i= 0; metin[i] != '\0'; i++){
    if(metin[i] == ' ' && ascii(metin[i	+ 1]))kelimeSayac++;
    if(arananKelime[harfSayac] == '\0') {
  	  printf("Aradiginiz kelime bulundu ! ! !\n\n");
    	printf("Aradiginiz kelime, metinin %d. kelimesinde bulunmaktadir...\n\n",kelimeSayac);
    }
    if(metin[i] != arananKelime[harfSayac++]) harfSayac= 0;
  }
  getch();
 return 0; 
}
