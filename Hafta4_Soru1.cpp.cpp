#include <stdio.h>
//1- Kullan�c�n�n klavyeden girdi�i metin i�erisinde ka� kelime oldu�unu bulan program kodunu yaz�n�z.

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
	printf("**************************	HOS GELD�N !	**************************");
	puts("\nKelime sayisini ogrenmek istediginiz metini giriniz : ");
	gets(metin);
 	kelimeSayisi=kelimeSayisiBul(metin);
	printf("\nGirdiginiz metin %d kelimeden olusmaktadir.", kelimeSayisi);
	return 0;
}
