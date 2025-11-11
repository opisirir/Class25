#include<stdio.h>
#include<stdlib.h>


int main(){
    float seri,paralel;
    int direncAdet,direncDeger,sayac;

    sayac=0; seri=0; paralel=0;
    printf("Kac adet direnc degeri gireceksiniz?");scanf("%d",&direncAdet);
    while(sayac<direncAdet)
    {
        printf("%d. direnc degerini giriniz:",sayac+1); scanf("%d",&direncDeger);

        seri=seri+direncDeger;

        paralel = paralel + (1.0 / direncDeger);
        sayac++;
    }

    paralel = 1.0 / paralel;
    printf("Seri baglamada deger:%.2f paralel baglamada:%.2f",seri, paralel);

    return 0;
}
