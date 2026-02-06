#include<stdio.h>
#include<stdlib.h>

void yazdir(int x){
if(x>0)
    {
        printf("*");
        yazdir(x-1);
    }
}


void yaz(int x)
{
    int i=0;
for (i = 0; i < x; i++)
{
    printf("*\n");
}
}

int main(){
//yaz(5);
yazdir(5);



    return 0;
}