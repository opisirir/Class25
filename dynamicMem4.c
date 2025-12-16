#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr=(int *)malloc(sizeof(int)*5);
    int i;

for (i=0;i<5;i++)

{
    ptr[i]=i*11;
}

for(i=0;i<5;i++)
{
    printf("%d. eleman:%d\n",i+1,ptr[i]);
}       

int *ek=(int *)realloc(ptr,sizeof(int)*10);

for(i=0;i<10;i++)
{
    printf("%d. eleman:%d\n",i+1,ek[i]);
}


    return 0;
}