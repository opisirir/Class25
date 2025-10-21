#include<stdio.h>
#include<stdlib.h>


int main(){
    int kisakenar,uzunkenar,alan,cevre;

    printf("kisa kenar degerini giriniz:"); scanf("%d",&kisakenar);
    printf("uzun kenar degerini giriniz:"); scanf("%d",&uzunkenar);

    cevre=2*(kisakenar+uzunkenar);
    alan=kisakenar*uzunkenar;

    printf("dikdortgenin cevresi:%d\n",cevre);
    printf("dikdortgenin alani:%d\n",alan);

}