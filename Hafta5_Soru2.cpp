#include <stdio.h>
#include <stdlib.h>
//Parametre olarak gelen tam sayinin basamak deðerleri toplamini yazdýran kod.
//2,147,483,647 en büyük int deðeri.

//FONKSÝYON kýsmý
int basamakToplam(int gelenSayi){

    int toplam=0;
	char a[1]={192};
    while(gelenSayi>0)//sayi 0 dan büyük oldugu sürece.
    {
    toplam+=gelenSayi%10;//toplam a girilen sayinin 10 ile bölümünden kalanini ekliycez.Ekledik toplama birler bas. eklendi.

	//printf("   %c%d\n",a[0],gelenSayi%10); //Bunu ek olarak yaptým :))

    gelenSayi/=10;//Sayiyi 10 a bölücez ve soldaki diðer basamaklar kalýcak. Tekrar basa dönüp 10 a göre moodu alýncak.O da toplama eklenecek.            
	}//Kalan 0 olana kadar bu þekilde gidilince toplam bulunur.
 return toplam;                 
              
}
//UYGULAMA kýsmý
main(){

  int sayi,toplam,gelenSayi;    
	printf("Basamak Degerlerini Toplayacagimiz Sayiyi giriniz : ");
	scanf("%d",&sayi);  
	//printf("\n%d\n",sayi);
	
toplam=basamakToplam(sayi);
//ek olarak basamaklari da yazdirdim.
	 
	//printf("+\n");
	//printf("------------");

	printf("\n\t %d sayisinin \n\tBasamak degerleri toplami : %d ",sayi,toplam);
 
      return 0;
}

