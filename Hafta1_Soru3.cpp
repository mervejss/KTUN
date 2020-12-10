#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Klavyeden girilen 3 tane tam sayýnýn ortalamasini ekrana yazdýran kod.

int main(){
//tam sayi dediði için int kullanmaliyiz.

	int sayi1,sayi2,sayi3,ortalama,cevap;
baslangic:
	printf("*****Girdiginiz 3 sayinin ortalamasini yazdiran proram*****\n");
	printf("\t*****\t\t\t\t\t*****\n");
	printf("\t\t*****\t\t*****\n");
	printf("\t\t\t*****\t\t*****");

	printf("\n3 sayinin ortalamasini bulmamiz icin 3 tane sayi girmelisin.\n ");
	
	printf("\nBirinci sayiyi gir:");
	scanf("%d",&sayi1);
	printf("\nIkinci sayiyi gir:");
	scanf("%d",&sayi2);
	printf("\nUcuncu sayiyi gir:");
	scanf("%d",&sayi3);

	
	ortalama=(sayi1+sayi2+sayi3)/3;
	printf("\n\nGirdiginiz %d , %d ve %d sayilarinin ortalamasi:\n %d'dir\n\n",sayi1,sayi2,sayi3,ortalama);

secim:
	
printf(">>Yeni 3 sayiya gore tekrar islem yapmak istiyor musunuz ?<<\n\n");
printf("                                  Evet=1 Hayir=2 cevabinizin numarasi:");
scanf("%d",&cevap);

if(cevap==1){
	printf("Tekrar islem yapmak uzere basa yonlendiriliyorsunuz...\n");
	goto baslangic;
}
else if(cevap==2){
	printf("Hayiri sectiniz cikisa yonlendiriliyorsunuz...\n");
	goto son;
}
else{
	printf("Yanlis islem numarasi girdiniz!!!\n");
	printf("Tekrar secmeniz icin yonlendiriliyorsunuz...\n");
	goto secim;
}
son:
	printf("Bir dahaki sefere gorusmek uzeree :))");

return 0;
}

