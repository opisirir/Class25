#include<stdio.h>
#include<stdlib.h>




int main(){
int i=16; // 0001 0000


printf("i degeri:%d\n",i);
/*i<<=1;
printf("i degeri:%d HEX:%X\n",i,i);
i<<=1;
printf("i degeri:%d HEX:%X\n",i,i);
*/
i>>=2;
printf("i degeri:%d HEX:%X\n",i,i);

int x=7; // 0000 0111
x>>=1;   // 0000 0011
printf("x degeri:%d HEX:%X\n",x,x);

    return 0;
}