#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Araba
{
    int ID;
    int uretimYili;
    int BeygirGucu;
    char segment;
};

int main(){
struct Araba mercedes;
mercedes.ID=101;
mercedes.uretimYili=2024;
mercedes.BeygirGucu=180;
mercedes.segment='A';

printf("Mercedes ID:%d\n",mercedes.ID);
printf("Mercedes Uretimi:%d\n",mercedes.uretimYili);
printf("Mercedes gucu:%d HP\n",mercedes.BeygirGucu);
printf("Mercedes %c Segment\n",mercedes.segment);

struct Araba bmw;
bmw.ID=105;
bmw.segment='B';
bmw.uretimYili=2025;
bmw.BeygirGucu=200;

printf("BWM ID=%d\n",bmw.ID);
printf("BMW Uretimi:%d\n",bmw.uretimYili);
printf("BMW gucu:%d HP\n",bmw.BeygirGucu);
printf("BMW %c segment\n",bmw.segment);

    return 0;
}