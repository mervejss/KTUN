#include <stdio.h>
#include <math.h>

//2- Kullanýcý tarafýndan girilen sayýya kadar olan çift sayýlarýn toplamýný 
//ve ortalamasýný ekrana yazdýran program kodunu yazýnýz.(for döngüsü kullanýnýz) 

int main(){
	baslangic:
	int sayi,cevap,ciftSayac=0,toplam=0;
	
	
printf("Bu programda,\nGirdiginiz sayiya kadar olan cift sayilarin toplamini ve ortalamasini yazacagiz.\n ");

printf("Islem yapacagimiz sayiyi giriniz:");
scanf("%d",&sayi);


for(int sayac = 1;sayac <= sayi;sayac++){
    if(sayac % 2 == 0) {
      toplam=toplam+sayac;
      ciftSayac++;
}
}
printf("\n0'dan girdiginiz sayiya kadar olan cift sayilarin TOPLAMI=%d",toplam);	

printf("\n\nSayilarin ortalamasi: %.3lf", (double)(toplam/ciftSayac));

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


