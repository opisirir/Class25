#include<stdio.h>
#include<stdlib.h>

int main(){ 
    char yazi[]={'T','e','k','n','o','l','o','j','i'};
    int i;
    int elemansay=sizeof(yazi)/sizeof(char);

    for(i=0;i<elemansay;i++)
    {
        printf("%c\n",yazi[i]);       

    }




    return 0;
}