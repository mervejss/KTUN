#include <stdio.h>
#include <math.h>

//3- Kullan�c�dan 4 adet say� istenilecek 
//Ve bu say�lardan tek olanlar�n aritmetik ortalamas�n�, 
//�ift olanlar�n geometrik ortalamas�n� hesaplayarak ekrana yaz�n�z.

int main(){
  int cevap,dortSayi[4];
baslangic:
  double aritmetikTop = 0, geometrikCarpim= 1;
  double tekSayiSayac = 0;
  double ciftSayiSayac;


    for(int sira = 1; sira < 5; sira++){
			
		    printf("Lutfen %d. sayiyi giriniz:\n", sira);
    		scanf("%d", &dortSayi[sira - 1]);
}
  	for(int i = 0; i < 4 ; i++){
    		
			if(dortSayi[i] % 2 == 0) 
geometrikCarpim *= dortSayi[i];
    	
			else {
aritmetikTop += dortSayi[i];
      tekSayiSayac++;
}
}

ciftSayiSayac=4-tekSayiSayac;

  printf("\n\n\nGirdiginiz sayilardan cift olanlarin geometrik ortalamasi: %.3lf", pow(geometrikCarpim, 1 / ciftSayiSayac));
 
  printf("\n\n\nGirdiginiz tek sayilarin aritmetik ortalamasi : %.3lf", (aritmetikTop / tekSayiSayac));
 
secim:
printf("\n\nYeni bir sayiya gore tekrar islem yapmak istiyor musunuz ?\n\n");
printf("                                  Evet=1 Hayir=2 cevabinizin numarasi:");
scanf("%d",&cevap);

if(cevap==1){
	printf("Tekrar islem yapmak uzere basa yonlendiriliyorsunuz...\n");
	goto baslangic;
}
else if(cevap==2){
	printf("Hayiri se�tiniz c�k�sa yonlendiriliyorsunuz...");
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

