#include<stdio.h>
#include<stdlib.h>


int main(){

    //vize final girişi ile ortalama hesaplar. 60 altı ortalama dersten kalır. 
    
    int v,f;
    float ort;
    

    printf("vize giriniz:");
    scanf("%d",&v);

    printf("final giriniz:");
    scanf("%d",&f);

    ort=(v*0.4)+(f*0.6);

    if(ort>=60)
    {
        printf("Ortalamaniz:%.2f\n",ort);
        printf("Gecitiniz.");
    }
    else
    {
        printf("Ortalamaniz:%.2f\n",ort);
        printf("Kaldiniz!");
    }



    return 0;
}