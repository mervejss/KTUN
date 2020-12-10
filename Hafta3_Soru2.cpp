#include <stdio.h>

/*
		|sutun
-satir	*	*	*	*	*
		*	?	?	?	*
		*	?	#	?	*
		*	?	?	?	*
		*	*	*	*	*
*/
int main(){

	char sekil[5][5];
	int satir,sutun;

  for(int satir= 0; satir< 5;satir++){
    for(int sutun= 0; sutun< 5;sutun++){
      
		if(satir == 0 || satir == 4 || sutun == 0 || sutun == 4) {
	    sekil[satir][sutun] = '*';
		}
	
		else if((satir != 0 || satir != 4) && (sutun != 0 || sutun != 4)) {
		
	  	sekil[satir][sutun] = '?';

	}

}
    sekil[2][2] = '#';
}
  for(int satir = 0; satir < 5;satir++){
    for(int sutun = 0; sutun < 5;sutun++){
      printf("%c", sekil[satir][sutun]);
    }
    printf("\n");
  }
  return 0;
}

//Hocam soruda tam olarak ne kullanacağımızı anlayamadığım için kullandıgım diğer yolları ya yorum satırı olarak alta ekleyeyim dedim.


/*>>>>>>>>>>>>>>>>>>>>2.YOL<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include <stdio.h>
#include <conio.h>

int main(){
    
//i,x=yatay-satir j,y=dikey-sutun
    
    for(int yatay=1; yatay<=5; yatay++){
        for(int dikey=1; dikey<=5; dikey++){
                
			if(yatay==1 || yatay==5 || dikey==1 || dikey==5){
            printf("*\t");
           	}
            else if(yatay==2 || yatay==4 || dikey==1 || dikey==2 || dikey==4){
		    printf("?\t");
           	}
            else if(yatay==3 && dikey==3){
			printf("#\t");
        	}
}
            printf("\n");
}
    return 0;
        getch();
} 


>>>>>>>>>>>>>>>>>>>>>>3.YOL<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


#include <stdio.h>
//int dizi[5][5]={{*,*,*,*,*},{*,?,?,?,*},{*,?,#,?,*},{*,?,?,?,*},{*,*,*,*,*}}; 
//ASCII tablosunda çevirip yaptık
int main(){

char dizi[5][5]={{42,42,42,42,42},{42,63,63,63,42},{42,63,35,63,42},{42,63,63,63,42},{42,42,42,42,42}}; 

int satir,sutun;

 for(int satir=0; satir<5; satir++){
        for(int sutun=0; sutun<5; sutun++){
                
			if(satir==0 || satir==4 || sutun==0 || sutun==4){
            printf("%c\t",dizi[satir][sutun]);
           	}
            else if(satir==1 || satir==3 || sutun==0 || sutun==1 || sutun==3){
		    printf("%c\t",dizi[satir][sutun]);
           	}
            else if(satir==2 && sutun==2){
			printf("%c\t",dizi[2][2]);
        	}
}
            printf("\n");
}
	return 0;
}*/
