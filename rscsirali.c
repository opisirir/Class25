#include<stdio.h>
#include<stdlib.h>

void degerYazdir(int a,int b,int sayi){
if(a<b)
{
printf("%d ",a);
degerYazdir(a+sayi,b,sayi);
//printf("%d ",a);
}
    
}

void degerYaz(int a,int b, int sayi){
for (; a < b; a+=sayi)
{
    printf("%d ",a);
}



}

int main(){

//degerYaz(10,20,3);
degerYazdir(10,20,3);

    return 0;
}