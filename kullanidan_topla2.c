#include<stdio.h>
#include<stdlib.h>

int main(){
    int sayi1,sayi2,toplam;

    printf("1. sayiyi girin:");
    scanf("%d",&sayi1);            //degiskeni scanf ile alıyorsak & koymalıyız.
    printf("2. sayiyi girin:");
    scanf("%d",&sayi2);
    
    toplam=sayi1+sayi2;
    //                                             1.     2.     3.
    printf("%d sayisi ile %d sayinin toplami:%d",sayi1,sayi2,toplam); //bu satır sıra ile değişkenleri herbir format belirleyici karşılığına yazar.
    //     1. değişken    2. değişken      3.değişken
    return 0;

}