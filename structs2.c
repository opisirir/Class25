#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Personel{
int ID;
char PersonelAdSoyad[70];
char Birim[50];
int maas;
};


int main(){
 struct Personel kisiler;
 kisiler.ID=101;
 //kisiler.PersonelAdSoyad="Onur M Pisirir";
 //kisiler.Birim="EEM";
strcpy(kisiler.PersonelAdSoyad,"Onur M Pisirir");
strcpy(kisiler.Birim,"EEM");

 kisiler.maas=500000;

 printf("%d ID %s isimli %s birimde calisiyor maasi:%d",kisiler.ID,kisiler.PersonelAdSoyad,kisiler.Birim,kisiler.maas);
 
    return 0;
}