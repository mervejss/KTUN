#include <stdio.h>
//3- Kullan�c�n�n klavyeden girdi�i metin i�erisindeki b�y�k harfleri k����e, k���k harfleri b�y��e �eviren program kodunu yaz�n�z. 
//(ASCI tablosundaki matematiksel hesap yani b�y�k-k���k harf aras�ndaki indeks fark� kullan�larak yap�lacakt�r.)
//NOT: Sorular strlen, strchr, strcpy, strcmp vb. gibi haz�r fonksiyonlar kullan�lmadan yap�lacakt�r.
//Girilen Metindeki K�c�k harfleri B�y�k, B�y�k harfleri k����e d�n��t�ren kod.
 
int main() {
    
char metin[500];
int i = 0;

    printf("Bir Metin Giriniz : \n");
    gets(metin);
    
    int degisim= 'a' - 'A';

    while (metin[i] != '\0') {
    	
        if (metin[i] >= 'A' && metin[i] <= 'Z') {
            metin[i] += degisim;
        } 
		else if (metin[i] >= 'a' && metin[i] <= 'z') {
            metin[i] -= degisim;
        }
        printf("%c", metin[i]);
        i++;
    }

    return 0;
}

