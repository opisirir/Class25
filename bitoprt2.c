#include<stdio.h>
#include<stdlib.h>




int main(){
unsigned char a,b,c,d,e,f;

a=12; // 0000 1100
b=21; // 0001 0101

printf("a:%d HEX:%X\n",a,a);
printf("b:%d HEX:%X\n",b,b);

c=~b; //1110 1010
printf("c:%d HEX:%X\n",c,c);

d=a&b;
printf("d:%d HEX:%X\n",d,d);

e=a|b;
printf("e:%d HEX:%X\n",e,e);

f=a^b;
printf("f:%d HEX:%X\n",f,f);


    return 0;
}