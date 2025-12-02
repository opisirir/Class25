#include<stdio.h>
#include<stdlib.h>
#include <math.h>

//RLC devre hesabı


float XLhesapla(float f, float L) 
{
    float sonuc=f * M_PI * f * L;
    return sonuc;
}


 float XChesapla(float f, float C) 
 {
    float sonuc= f/ (2.0f * M_PI * f * C);
    return sonuc;
}

float Zhesapla(float R, float XL, float XC) 
{
    float sonuc;
    float fark = XL - XC;
    sonuc= sqrt(R*R + fark*fark);
    return sonuc;
}

float Ihesapla(float V, float Z) 
{
    //cikan sonucu direkt olarak boyle gonderebilirsiniz. 
    return V / Z;
}

int main() {
    float R, L, C, f, V;

    printf("Direnc giriniz (R): ");
    scanf("%f", &R);

    printf("Enduktans giriniz (L): ");
    scanf("%f", &L);

    printf("Kapasitans giriniz (C): ");
    scanf("%f", &C);

    printf("Frekans giriniz (f): ");
    scanf("%f", &f);

    printf("Gerilim giriniz (V): ");
    scanf("%f", &V);

    float XL = XLhesapla(f, L);
    float XC = XChesapla(f, C);
    float Z  = Zhesapla(R, XL, XC);
    float I  = Ihesapla(V, Z);

    printf("--- Hesap Sonuclari ---\n");
    printf("XL= %.4f ohm\n", XL);
    printf("XC= %.4f ohm\n", XC);
    printf("Z= %.4f ohm\n", Z);
    printf("I= %.6f A\n", I);

    return 0;
}   