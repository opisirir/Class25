#include<stdio.h>
#include<stdlib.h>


int main(){
    int x,y,z;
    float ort;

    printf("1. sayiyi giriniz:"); scanf("%d",&x);
    printf("2. sayiyi giriniz:"); scanf("%d",&y);
    printf("3. sayiyi giriniz:"); scanf("%d",&z);

    ort=(x+y+z)/3;

    printf("3 sayinin ortalamasi:%.2f\n",ort);

}