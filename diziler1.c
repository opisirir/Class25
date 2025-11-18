#include <stdio.h>
#include <stdlib.h>


int main(void) {
   
    int sayilar[]={10,20,30,40,50};
    int sayilar1[2];

  

    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);

    sayilar1[0]=100;
    sayilar1[1]=200;
    sayilar1[2]=300;//fazla eleman yazıldı.

    printf("%d\n",sayilar1[0]);
    printf("%d\n",sayilar1[1]);
    printf("%d\n",sayilar1[2]);
    
      int diziBoyut=sizeof(sayilar);
    printf("Dizi boyutu: %d\n",diziBoyut);
    
    return 0; 

    
    

}