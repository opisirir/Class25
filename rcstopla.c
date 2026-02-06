#include<stdio.h>
#include<stdlib.h>

int toplama(int x){
if(x==0)
    return 0;
return x+toplama(x-1);
}


int toplam(int x)
{ int i;
    int toplam=0;
    for ( i = 0;  i <= x; i++)
    {
        toplam+=i;
    }
    return toplam;

}

int main(){

int sonuc;
//sonuc=toplam(5);
sonuc=toplama(5);
printf("%d\n",sonuc);
    return 0;
}