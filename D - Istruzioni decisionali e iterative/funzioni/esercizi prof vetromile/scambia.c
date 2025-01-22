#include <stdio.h>
void scambia(int *x, int *y);
int main()
{
    int a,b;
    printf("dammi due numeri");
    scanf("%d%d",&a,&b);
    scambia(&a,&b);
printf("a= %d e b=%d",a,b);
}
void scambia(int *x, int *y)
{
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
    }