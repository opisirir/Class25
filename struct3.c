#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Urunler{
   char Marka[50];
   char Urunisim[50];
   int fiyat;
}fare,klavye;

void fiyatAta(void){
    fare.fiyat=640;
    klavye.fiyat=950;
}

int main(){

    fiyatAta();
strcpy(fare.Marka,"Logitech");
strcpy(fare.Urunisim,"fare");

printf("%s marka %s urun fiyat:%d\n",fare.Marka,fare.Urunisim,fare.fiyat);

strcpy(klavye.Marka,"Everest");
strcpy(klavye.Urunisim,"klavye");

printf("%s marka %s urun fiyat:%d\n",klavye.Marka,klavye.Urunisim,klavye.fiyat);

    return 0;
}