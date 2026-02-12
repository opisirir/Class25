#include<stdio.h>
#include<stdlib.h>

#define AlanHesap(taban,h) ((taban)*(h+3)*0.5f)

int main()
{
    float x=5.0,y=8.0;
    float sonuc=AlanHesap(x,y);
    printf("alan=%.2f",sonuc);
    return 0;
}