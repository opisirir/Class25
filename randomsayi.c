#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int randsayilar[5];
int i, elemansay=sizeof(randsayilar)/sizeof(int);

    srand(time(NULL));
    int x;

    x=55+rand()%(100-55+1);
    printf("%d\n",x);
    int y=rand()%1555;
    printf("%d\n",y);

for(i=0;i<elemansay;i++)
{
    randsayilar[i]=rand()%100;
    printf("%d. eleman:%d\n",i+1,randsayilar[i]);
}





    return 0;



}