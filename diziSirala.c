#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int sayilar[5];
    int elemansay=sizeof(sayilar)/sizeof(int);  
    int i,j,kova;

    for(i=0;i<elemansay;i++)
    {
        printf("%d. elemani giriniz:",i+1);
        scanf("%d",&sayilar[i]);
    }
    for(i=0;i<elemansay;i++)
    {
        for (j=i+1;j<elemansay;j++)
        {
            if(sayilar[i]<sayilar[j])
        {
            kova=sayilar[i];
            sayilar[i]=sayilar[j];
            sayilar[j]=kova;
        }
    }
        printf("*********Siralanmis dizi*********\n");
        for(i=0;i<elemansay;i++)
        {
            printf("%d. eleman:%d\n",i+1,sayilar[i]);
        }
        
    }


    




    return 0;
}