#include<stdio.h>
#include<stdlib.h>


int main(){

    //sıcaklık derecelendirmesi iç içe if kullanımı
    
    int sicaklik;
  
    

    printf("sicaklik giriniz:");
    scanf("%d",&sicaklik);

    if(sicaklik>=35)
    {
        printf("Hava cok sicak.");
    }
    else if (sicaklik>=28)
    {
        printf("Hava sicak.");
    }
    else if(sicaklik>=20)
    {
        printf("Hava normal.");
    }
    else if(sicaklik>=15)
    {
        printf("Hava serin.");
    }
    else
    {
        printf("Hava soğuk.");
    }
    
    return 0;
}