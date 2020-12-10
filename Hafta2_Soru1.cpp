#include <stdio.h>
#include <math.h>

//Kullanýcý tarafýndan vize ve final notunu girilecek.
//Geçme notu hesaplanacak 
//Geçme notu 60 ve üstünde ise ekrana "geçtiniz" yazacak 
//Altýnda ise kullanýcýdan bütünleme notu istenecek ve geçme notu tekrar hesaplanacak 
//Hesaplanan geçme notu 60'ýn altýnda ise "kaldýnýz" deðilse "geçtiniz" yazacak.
//(Geçme Notu=0.6*Final+0.4*Vize

int main(){
	int cevap;
	float vize,final,butunleme;
	double gecmeNotu;
	
baslangic:	
	printf("Vize notunuzu(0-100) giriniz: ");
	scanf("%f",&vize);
			if(vize>100||vize<0){
			
			printf("Lutfen gecerli not araliginda bir deger giriniz!(0-100)\n\n");
			goto baslangic;
}
	printf("\t\t\t\tFinal notunuzu(0-100) giriniz: ");
	scanf("%f",&final);
		if(final>100||final<0){
			printf("Lutfen gecerli not araliginda bir deger giriniz!(0-100)\n\n");
			goto baslangic;
}
gecmeNotu=(0.6*final + 0.4*vize);
	
	printf("GECME NOTUNUZ: %.2lf \n",gecmeNotu);
	
		if(gecmeNotu>=60){
			printf("\nTEBRIKLER!! GECTINIZ :)");
}
		else {
			printf("\n\nMaalesef, kaldiniz :( )");	
			printf("\n\nLutfen simdi butunleme notunuzu giriniz:");
			scanf("%f",&butunleme);		

		
gecmeNotu=(0.6*butunleme + 0.4*vize);

	printf("YENÝ GECME NOTUNUZ: %.2lf \n",gecmeNotu);
	
			if(gecmeNotu>=60){
			printf("\nTEBRIKLER!! GECTINIZ :)");
}
			else{
			printf("Maalesef, kaldiniz :( )");
			
}	
}
secim:
printf("Yeni bir islem yapmak istiyor musunuz ?\n\n");
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
	printf("Bir dahaki sefere gorusmek uzeree :)");
	return 0;
}
