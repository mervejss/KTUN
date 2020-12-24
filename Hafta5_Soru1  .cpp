#include <stdio.h>
//C(n,r)=n!/r!*(n-r)! Kullanýcýdan alinan n ve r deðerlerinin kombinasyonunu hesaplayan kod.
//f=faktöriel fonksiyonu

//FONKSÝYON kýsmý
int f(int x){
	
	int fk=1,a;
	
		for(a=1;a<=x;a++)
	
			fk=fk*a;
	
	return fk;	
}
//her satirda faktöriyl iþlemi oldugu için faktöriyel fonk. tanýmladik.

//UYGULAMA kýsmý.
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
