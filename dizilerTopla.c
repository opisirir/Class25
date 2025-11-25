#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int sayilar[5];
    int elemanSay=sizeof(sayilar)/sizeof(int);
    int i;
    int toplam=0;


    for(i=0;i<elemanSay;i++)
{
     printf("%d. degeri giriniz:",i+1);
     scanf("%d",&sayilar[i]);
    toplam+=sayilar[i];

}
for (i=0;i<elemanSay;i++)
{
    printf("%d. eleman:%d\n",i+1,sayilar[i]);
}

printf("toplam:%d",toplam);
    return 0;
}