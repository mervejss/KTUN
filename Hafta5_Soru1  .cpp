#include <stdio.h>
//C(n,r)=n!/r!*(n-r)! Kullan�c�dan alinan n ve r de�erlerinin kombinasyonunu hesaplayan kod.
//f=fakt�riel fonksiyonu

//FONKS�YON k�sm�
int f(int x){
	
	int fk=1,a;
	
		for(a=1;a<=x;a++)
	
			fk=fk*a;
	
	return fk;	
}
//her satirda fakt�riyl i�lemi oldugu i�in fakt�riyel fonk. tan�mladik.

//UYGULAMA k�sm�.
int main(){

	int n,r,combinasyon;
	
	printf("\n\nCombinasyon islemi uygulayacagimiz N degerini giriniz... n: ");
	scanf("%d",&n);
	
	printf("\n\nCombinasyon islemi uygulayacagimiz R degerini giriniz... r: ");
	scanf("%d",&r);
		
	combinasyon=f(n)/(f(r)*f(n-r));
		
	printf("\n\n%d 'nin %d 'li COMBINASYONU : %d 'dir. ",n,r,combinasyon);
	
	return 0;
}
