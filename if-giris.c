#include<stdio.h>
#include<stdlib.h>


int main(){
    int sayi;

    printf("bir sayi giriniz:\n");
    scanf("%d",&sayi);

    if(sayi>10)
    {
        printf("sayi 10'dan buyuktur.");
    }
    else
    {
        printf("sayi 10'dan buyuk degildir.");
    }
    return 0;
}