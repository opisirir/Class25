#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
 int *ptr=(int *)malloc(20);
 int *ptr2=(int *)malloc(5*(sizeof(int)));

 for (i=0;i<5;i++)
 {
ptr[i]=i*5;
 }

 for(i=0;i<5;i++)
 {
    printf("%d. eleman:%d\n",i+1,ptr[i]);
 }
    return 0;
}
