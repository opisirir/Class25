#include<stdio.h>
#include<stdlib.h>

int voltaj;

void voltajOku(){

voltaj=240;

}

void KontrolEt()
{
if(voltaj>220)
printf("Voltaj yuksek");
else
printf("Voltaj normal");


}


int main(){


voltajOku();
KontrolEt();








    return 0;
}