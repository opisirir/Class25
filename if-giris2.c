#include<stdio.h>
#include<stdlib.h>


int main(){

    //program büyük sayidan küçük sayiyi çıkarır. 

    int sayi1,sayi2,fark;
    

    printf("1. sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("2. sayiyi giriniz:");
    scanf("%d",&sayi2);

    if(sayi1>sayi2)
    {
        fark=sayi1-sayi2;
        printf("fark:%d",fark);
    }
    else
    {
        fark=sayi2-sayi1;
        printf("fark:%d",fark);
    }



    return 0;
}