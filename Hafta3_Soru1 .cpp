#include <stdio.h>
#include <math.h>

//Kullan�c� taraf�ndan girilen 20 tane tamsay� de�eri bir D�Z� ye aktar�lacak.
//Dizi elemanlar�ndan ��FT olanlar�n TOPLAMINI dizinin EN B�Y�K DE�ERL� eleman�na b�l. Sonucu ekrana yazdir.

int main(){
	int sayilar[20];
	int i,j,toplam=0;
		
	printf("20 tane sayi girmelisiniz.");
	printf("\nGirdiginiz sayilardan CIFT olanlarin TOPLAMINI \nsayilarin EN BUYUGUNE bolup,sonucu yazdiracagiz...\n\n\n");
	
	for(i=0; i<20 ; i++)
	{
		printf("\n %d. sayiyi giriniz:",i+1);
		scanf("%d",&sayilar[i]);
			
			if(sayilar[i]%2==0)	{
				toplam+=sayilar[i];
					printf("\nGirdiginiz bir cift sayidir\n"); 	
		}
	}
	int enBuyuk=sayilar[0];
    for(j=0; j<20; j++){
        if(enBuyuk<sayilar[j]){
        	
            enBuyuk=sayilar[j];
            	if(enBuyuk==0) printf("PAYDA 0 olamaz !! TANIMSIZ/BELIRSIZLIK OLUSUR ! Ge�ersiz islem");
        }
    }

	printf("\nGirdiginiz cift sayilarin toplami: %d",toplam);
	
	printf("\nGirdiginiz sayilardan EN BUYUK olani : %d ' dir ",enBuyuk);		

	printf("\nS O N U C  = %.3lf 'dir ! ! ! ",(double)toplam/enBuyuk);
	
	return 0;
}
