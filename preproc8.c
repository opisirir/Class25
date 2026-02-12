#include<stdio.h>
#include<stdlib.h>

#define TekMi(x) x%2==1
//kalanı döndürmez
int main(){

    int sayi=47;
    int sonuc=TekMi(sayi);
    printf("sonuc:%d\n",sonuc);

    return 0;
}