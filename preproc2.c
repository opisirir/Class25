#include<stdio.h>
#include<stdlib.h>

#define DONMA 32.0f
#define BOLME (9.0f/5.0f)

int main(){

    float fahr,celc;
    fahr=130;
    celc=(fahr-DONMA)/BOLME;

    printf("celc:%.1f",celc);
    return 0;
}