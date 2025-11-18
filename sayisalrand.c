#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int sayilar[6];
    int kolon, i, j, rastgele;

    printf("Kac Kolon oynamak istersiniz? ");
    scanf("%d", &kolon);

    for(i = 0; i < kolon; i++) 
    {
        for(j = 0; j < 6; j++) 
        {
            rastgele = (rand() % 49) + 1;
            sayilar[j] = rastgele;
        }

        printf("%d. Kolon: ", i + 1);
        for(j = 0; j < 6; j++)
        {
            printf("%d ", sayilar[j]);
        }
        printf("\n");
    }

    return 0;
}