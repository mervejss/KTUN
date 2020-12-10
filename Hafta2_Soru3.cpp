#include <stdio.h>
#include <math.h>

//3- Kullanýcýdan 4 adet sayý istenilecek 
//Ve bu sayýlardan tek olanlarýn aritmetik ortalamasýný, 
//Çift olanlarýn geometrik ortalamasýný hesaplayarak ekrana yazýnýz.

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

