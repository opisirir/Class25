#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int sayilar[5];
    int elemansay=sizeof(sayilar)/sizeof(int);
    int i,max,min;

for(i=0;i<elemansay;i++)
{
    printf("%d. elemani giriniz:",i+1);
    scanf("%d",&sayilar[i]);
}

max=sayilar[0];
min=sayilar[0];

for (i=0;i<elemansay;i++)
{
    if(sayilar[i]>max)
    {
        max=sayilar[i];
    }
    if(sayilar[i]<min)
    {
        min=sayilar[i];
    }
}

printf("Dizi icindeki en buyuk eleman:%d\n",max);
printf("Dizi icindeki en kucuk eleman:%d",min);

    return 0;
}