#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum{
 ACIK,
 KAPALI

}AnahtarDurum;

void DurumSorgula(AnahtarDurum Gelen)
{
    if(Gelen==ACIK)
    printf("LED yaniyor.\n");
    else
    printf("LED yanmiyor");
}

int main(){
    AnahtarDurum anahtarDurumu=KAPALI;
    int secim;


while (1)
{
    printf("1-ACIK 0-KAPALI 9-EXIT");scanf("%d",&secim);
    if(secim==1)
    {
      anahtarDurumu=ACIK;
    }
    else if(secim==0)
    {
        anahtarDurumu=KAPALI;
    }
    else
    {
        printf("Gecersiz secim!\n");
        continue;
    }
    DurumSorgula(anahtarDurumu);
   
}
    return 0;
}