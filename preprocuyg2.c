#include<stdio.h>
#include<stdlib.h>

#define PWMPeriyot 250
#define Karsilastirma(duty)   ((duty) * PWMPeriyot / 100)

int main(){

    float duty;
    printf("Duty degerini girin(Yuzde):");scanf("%f",&duty);

    duty=duty*10.0;
    float karsilastir;
    karsilastir=(duty*PWMPeriyot)/100;

    printf("karsilastirma=%.2f\n",karsilastir);





    return 0; 
}