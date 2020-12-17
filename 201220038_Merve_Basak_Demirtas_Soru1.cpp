#include <stdio.h>
//1- Kullanýcýnýn klavyeden girdiði metin içerisinde kaç kelime olduðunu bulan program kodunu yazýnýz.

int kelimeSayisiBul(char *);
int kelimeSayisiBul(char *metin) {
	int i=0;
	int kelimeSayisi=0;
	while (metin[i]!='\0') {
		if(metin[i]==' ')
		kelimeSayisi++;
		i++;
	}
	return kelimeSayisi+1;
}
int main() {
	char metin[200];
	int kelimeSayisi=0;
	printf("**************************	HOS GELDÝN !	**************************");
	puts("\nKelime sayisini ogrenmek istediginiz metini giriniz : ");
	gets(metin);
 	kelimeSayisi=kelimeSayisiBul(metin);
	printf("\nGirdiginiz metin %d kelimeden olusmaktadir.", kelimeSayisi);
	return 0;
}
