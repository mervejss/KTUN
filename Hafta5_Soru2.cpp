#include <stdio.h>
#include <stdlib.h>
//Parametre olarak gelen tam sayinin basamak de�erleri toplamini yazd�ran kod.
//2,147,483,647 en b�y�k int de�eri.

//FONKS�YON k�sm�
int basamakToplam(int gelenSayi){

    int toplam=0;
	char a[1]={192};
    while(gelenSayi>0)//sayi 0 dan b�y�k oldugu s�rece.
    {
    toplam+=gelenSayi%10;//toplam a girilen sayinin 10 ile b�l�m�nden kalanini ekliycez.Ekledik toplama birler bas. eklendi.

	//printf("   %c%d\n",a[0],gelenSayi%10); //Bunu ek olarak yapt�m :))

    gelenSayi/=10;//Sayiyi 10 a b�l�cez ve soldaki di�er basamaklar kal�cak. Tekrar basa d�n�p 10 a g�re moodu al�ncak.O da toplama eklenecek.            
	}//Kalan 0 olana kadar bu �ekilde gidilince toplam bulunur.
 return toplam;                 
              
}
//UYGULAMA k�sm�
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

