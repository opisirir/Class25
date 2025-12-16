#include<stdio.h>
#include<stdlib.h>  

int main(){
int *ptr=(int *)malloc(sizeof(int)*5);

if(ptr==NULL)
{
printf("Bellek ayirma basarisiz!\n");
exit(0);
}
else
printf("Bellek ayirma basarili!\n");

printf("devam ediyor.\n");



    return 0;   
}