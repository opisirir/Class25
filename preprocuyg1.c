#include<stdio.h>
#include<stdlib.h>

#define VREF        6.0f
#define ADC_MAX     127.0f
#define ADCVout(x)   ((x) * VREF / ADC_MAX)

int main()
{
    float ADCdeger=120.0;
    float sonuc=ADCVout(ADCdeger);
    printf("Vout:%.2f\n",sonuc);
    
    return 0;
}