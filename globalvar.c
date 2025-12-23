#include<stdio.h>  
#include<stdlib.h>  

int x=23;
int y=345;



int hesap(int x, int y)
{
    x=34;
    y=56;
    return x*y;

}

void topla()
{
    printf("toplam:%d\n",x+y);


}







int main()
{

   


    int sonuc=x+y;

    printf("sonuc:%d\n",sonuc);

    printf("sonuc:%d\n",hesap(x,y));

topla();
    return 0;
}