#include<stdio.h>
#include<stdlib.h>

int main(){

     
    float boy,kilo,vki;

    printf("Boyunuzu cm olarak giriniz:");scanf("%f",&boy);
    printf("Kilonuzu kg olarak giriniz:");scanf("%f",&kilo);

    boy=boy/100;

    vki=kilo/(boy*boy);
    printf("VKI degeriniz:%.2f\t",vki);

if(vki<18.5)
    printf("Zayif");
else if(vki>18.5&&vki<24.9)
    printf("Saglikli");
else if(vki>25&&vki<29.9)
    printf("Sisman");
else if(vki>30&&vki<39.9)
    printf("Obez");
else
    printf("Asiri Obez");

    return 0;
}