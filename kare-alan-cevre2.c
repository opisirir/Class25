#include<stdio.h>
#include<stdlib.h>
#include<math.h>    //matematik işlemler için gerekli kütüphane

int main(){
    int kenar;
    int cevre, alan;

    printf("Kenar degerini giriniz:"); scanf("%d",&kenar);

    cevre=4*kenar;
    alan=pow(kenar,2);  //üs hesaplar -> pow(taban,üs)

    printf("karenin cevresi:%d\n",cevre);
    printf("karenin alani:%d\n",alan);

}