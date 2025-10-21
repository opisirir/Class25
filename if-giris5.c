#include<stdio.h>
#include<stdlib.h>


int main(){

    //devamsizlik ve not
    
    int v,f,devamsiz;
    float ort;
    

    printf("vize giriniz:");
    scanf("%d",&v);

    printf("final giriniz:");
    scanf("%d",&f);

    ort=(v*0.4)+(f*0.6);

    printf("kac gun devamsizlik yaptiniz? ");
    scanf("%d",&devamsiz);

    if(ort>=60&&devamsiz<5) //iki şart da aynı anda sağlanmalı
    {
        printf("Gectiniz");
    }
    else 
    {
        printf("Kaldiniz.");
    }
    
    return 0;
}