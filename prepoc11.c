#include<stdio.h>
#include<stdlib.h>


int main(){

#ifndef x
    #define x 20
#endif

    printf("gelen:%d\n",x);

    return 0;
}