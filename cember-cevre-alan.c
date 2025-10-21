#include<stdio.h>
#include<stdlib.h>


int main(){
    int yaricap;
    float cevre,alan;
    const float pi=3.14;


    

    printf("yaricap giriniz:"); scanf("%d",&yaricap);
  

    cevre=2*pi*yaricap;
    alan=pi*yaricap*yaricap;
    
    printf("%d yaricapli cemberin cevresi:%.2f alani:%.2f",yaricap,cevre,alan);

}