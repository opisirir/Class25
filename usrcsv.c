#include<stdio.h>
#include<stdlib.h>

int usHesapla(int x,int y)
{
    if(y==1)
    return x;

return x*usHesapla(x,y-1);

}


int us(int x,int y){
int uslu=1;
int i;
for (i = 0; i < y; i++)
{
    uslu*=x;
}
return uslu;

}


int main(){
int sonuc;
//sonuc=us(2,5);
sonuc=usHesapla(2,5);
printf("%d\n",sonuc);

return 0;    
}