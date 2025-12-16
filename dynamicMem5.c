#include<stdio.h>
#include<stdlib.h>

int main(){ 
int i;
int *p;
int j;


printf("Kac eleman gireceksiniz? ");
scanf("%d",&i);

p=calloc(i,sizeof(int));

for (j=0;j<i;j++)
{
    printf("%d. elemani giriniz:",j+1);
    scanf("%d",&p[j]);
}

int ek;
printf("Eklemek istediginiz elemani giriniz:");
scanf("%d",&ek);

p=realloc(p,(i+ek)*sizeof(int));
for(j=i;j<i+ek;j++)
{
    printf("%d. elemani giriniz:",j+1);
    scanf("%d",&p[j]);
}

for(j=0;j<i+ek;j++  )
{
    printf("%d. eleman:%d\n",j+1,p[j]);
}

free(p);

    return 0;

}