#include<stdio.h>
#include<stdlib.h>

int faktHesap(int x){
if(x==1)
   return 1;
return x*faktHesap(x-1);
}



int fakt(int x){
int fakt=1;
int i;
for (i = 1; i <= x; i++)
{
    fakt*=i;
}
return fakt;
}


int main(){
int sonuc;
    //sonuc=fakt(5);
    sonuc=faktHesap(5);
    printf("sonuc:%d\n",sonuc);



    return 0;
}