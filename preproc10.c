#include<stdio.h>
#include<stdlib.h>

#define V 12


int main(){

#if V==1
    printf("Program versiyon 1 calisacak.");

#elif V==2
    printf("Program versiyon 2 calisacak");  

#else
    printf("Program standart versiyon calisacak");
#endif    


    return 0;
}