#include<stdio.h>
#include<stdlib.h>

#define DegerArtir(x) x+5

int main(){

    int sayi=45;
    DegerArtir(sayi);
    printf("yeni deger:%d\n",sayi);
    printf("gelen:%d\n",DegerArtir(sayi));


    return 0;
}