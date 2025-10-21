#include<stdio.h>
#include<stdlib.h>

int main(){
    int kenar;
    int cevre, alan;

    printf("Kenar degerini giriniz:"); scanf("%d",&kenar);

    cevre=4*kenar;
    alan=kenar*kenar;

    printf("karenin cevresi:%d\n",cevre);
    printf("karenin alani:%d\n",alan);

}