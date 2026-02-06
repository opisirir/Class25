#include<stdio.h>
#include<stdlib.h>     

int main(){
unsigned char a,b,c,d,e,f;

a=12; // 0000 1100
b=21; // 0001 0101     <-0000

printf("a:%d HEX:%X\n",a,a);
a=1<<4;
printf("a:%d HEX:%X\n",a,a);
a=a|(1<<5);
printf("a:%d HEX:%X\n",a,a);

//b=0<<4;
//printf("b:%d HEX:%X\n",b,b);

b=b&~(1<<2);
printf("b:%d HEX:%X\n",b,b);

if(a&1<<5)
printf("deger 1");
else
printf("deger 0");

return 0;
}