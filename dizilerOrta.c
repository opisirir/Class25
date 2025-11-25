#include<stdio.h>
#include<stdlib.h>

int main(){ 
   float sicaklik[5];
   int i;
   float ort,toplam=0;
  int elemansay=sizeof(sicaklik)/sizeof(float);

for (i=0;i<elemansay;i++)
{
    printf("%d. elemani giriniz:",i+1);
    scanf("%f",&sicaklik[i]);
    toplam+=sicaklik[i];
}

for (i=0;i<elemansay;i++)
{
    printf("%d. eleman:%.2f\n",i+1,sicaklik[i]);
}

ort=toplam/elemansay;
printf("ortalama:%.2f",ort);

    return 0;
}