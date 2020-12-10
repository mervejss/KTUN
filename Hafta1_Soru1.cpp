#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Klavyeden girilen 2 sayýnýn temel 4 iþlem sonucunu ekrana yazdýran kod.

int main(){
	double sayiBir,sayiIki;
	int cevap;

baslangic:

printf("******2 Sayinin 4 islem sonucunu gosteren programa hos geldinizz******\n\n");
printf("      **********************************************************\n     ");

printf("Oncelikle islem yapacaginiz 1.sayiyi giriniz:");
scanf("%lf",&sayiBir);
printf("Girdiginiz 1.sayi:%lf\n     ",sayiBir);

tekrar:
	
printf("Simdi de  islem yapacaginiz 2.sayiyi giriniz:");
scanf("%lf",&sayiIki);
printf("Girdiginiz 2.sayi:%lf\n     ",sayiIki);

printf("Simdi girdiginiz %lf ve %lf sayilarinin 4 isleme gore sonucunu  listeliyoruz:\n\n",sayiBir,sayiIki);

printf(" %lf ve %lf sayilarinin toplamlari:%lf\n ",sayiBir,sayiIki,sayiBir + sayiIki);
printf("%lf ve %lf sayilarinin farklari:%lf\n ",sayiBir,sayiIki,sayiBir - sayiIki);
printf("%lf ve %lf sayilarinin carpimlari:%lf\n ",sayiBir,sayiIki,sayiBir * sayiIki);

if(sayiBir==0 && sayiIki==0){
	printf("%lf ve %lf sayilarinin bolumleri:",sayiBir,sayiIki );
	printf("Bolme isleminde 0/0 yapmak belirsizlige sebep olur.\n");
	printf("Bu islemin sonucu 'belirsizdir'. \nLutfen uygun sayilar giriniz.\n");
	goto baslangic;
}
else if(sayiIki==0){
	printf("%lf ve %lf sayilarinin bolumleri:",sayiBir,sayiIki );
	printf("Bolme isleminde payda 0 olamaz,\n TANIMSIZ olur.\n");
	printf("Lutfen uygun bir sayi giriniz !!!\n");
	goto tekrar;
}
else{
	printf("%lf ve %lf sayilarinin bolumleri:%lf\n\n ",sayiBir,sayiIki,sayiBir / sayiIki);
	goto secim;
}

secim:
printf("Yeni 2 sayiya göre tekrar islem yapmak istiyor musunuz ?\n\n");
printf("                                  Evet=1 Hayir=2 cevabinizin numarasi:");
scanf("%d",&cevap);

if(cevap==1){
	printf("Tekrar islem yapmak uzere basa yonlendiriliyorsunuz...\n");
	goto baslangic;
}
else if(cevap==2){
	printf("Hayiri seçtiniz cýkýsa yonlendiriliyorsunuz...");
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
