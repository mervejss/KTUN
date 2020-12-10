#include <stdio.h>
#include <math.h>

//Klavyeden girilen 2 sayýyý karþýlaþtýrýp, büyüðünü bulup yazdýran program

int main(){
	
	double a,b;
	int cevap; 
	
//deðiþkenleri tanýmladýk

baslangic:
	
	printf("***Girdiginiz 2 sayiyi karsilastirip buyuk olani ekrana yazdiracagiz***\n\n\n");
	
	printf("Bunun icin ilk sayiyi giriniz:");  
	scanf("%d",&a);
	printf("\nGirdiginiz ilk sayi:  %d ",a);
	
	printf("\n\nSimdi de diger sayiyi giriniz:");
	scanf("%d",&b);
	printf("\nGirdiginiz diger sayi: %d \n\n\n",b);
	
	if(a>b){
	printf("\n\nGirdiginiz iki sayidan buyuk olan: %d'dir \n\n\n",a);
}
	else if(a<b){
	printf("\nGirdiginiz iki sayidan buyuk olan: %d'dir \n\n\n",b);
}
	else{
	printf("\nGirdiginiz iki sayi da ayni,maalesef buyuk olan bulunamadý..\n");		
}
secim:
	
printf("Yeni 2 sayiya gore tekrar islem yapmak istiyor musunuz ?\n");
printf("                  Evet=1 Hayir=2 cevabinizin numarasi:");
scanf("%d",&cevap);

if(cevap==1){
	printf("\nTekrar islem yapmak uzere basa yonlendiriliyorsunuz...\n");
	goto baslangic;
}
else if(cevap==2){
	printf("\nHayiri sectiniz cikisa yonlendiriliyorsunuz...\n");
	goto son;
}
else{
	printf("Yanlis islem numarasi girdiniz!!!\n");
	printf("Tekrar secmeniz icin yonlendiriliyorsunuz...\n");
	goto secim;
}
son:
	printf("\nBir dahaki sefere gorusmek uzeree :))");
	return 0;
}
