#include<stdio.h>
#include<stdlib.h>

int main(){ 
int sayilar[5];
int i;
int elemansay=sizeof(sayilar)/sizeof(int);

for(i=0;i<elemansay;i++)
{
    printf("%d. elemani giriniz:",i+1);
    scanf("%d",&sayilar[i]);
}

for (i=elemansay;i>0;i--)
{
    printf("%d. eleman:%d\n",i,sayilar[i-1]);
}
    return 0;
}