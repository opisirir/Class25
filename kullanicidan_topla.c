#include<stdio.h>
#include<stdlib.h>

int main(){
    int sayi1,sayi2,toplam;

    printf("1. sayiyi girin:");
    scanf("%d",&sayi1);            //degiskeni scanf ile alıyorsak & koymalıyız.
    printf("2. sayiyi girin:");
    scanf("%d",&sayi2);
    
    toplam=sayi1+sayi2;

    printf("İki sayinin toplami:%d",toplam);

    return 0;

}