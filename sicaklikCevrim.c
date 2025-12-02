
#include <stdio.h>
#include <stdlib.h>

float KelvineCevir(float santigrat) 
{
    float mutlak_sifir = 273.15;     
    float kelvin = santigrat + mutlak_sifir;
    return kelvin;
}

float FahrenheitaCevir(float santigrat) 
{
    float fahrenheit = (santigrat*(9/5)) + 32;
    return fahrenheit;
}

int main() {
    float s, k, f;

    printf("Santigrat degerini girin: "); scanf("%f", &s);

    k = KelvineCevir(s);
    f = FahrenheitaCevir(s);

    printf("Kelvin: %.2f\n", k);
    printf("Fahrenheit: %.2f\n", f);
    return 0;
}