#include<stdio.h>
#include<stdlib.h>


int main(){
    int taban,h,alan;

    printf("taban giriniz:"); scanf("%d",&taban);
    printf("yukseklik giriniz:"); scanf("%d",&h);

    alan=(taban*h)/2;

    printf("ucgenin alani:%d\n",alan);

}