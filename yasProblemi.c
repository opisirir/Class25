#include<stdio.h>
#include<stdlib.h>


int main(){
    int yas,sayac;
    sayac=0;
    
    while(sayac<5)
    {
        printf("Yas giriniz:");scanf("%d",&yas);
        if(yas<18)
            printf("Cocuksunuz.\n");
        else if (yas>18&&yas<45)
            printf("Gencsiniz.\n");
        else
            printf("Yaslisiniz.\n");

        sayac++;
    }

    return 0;
}
