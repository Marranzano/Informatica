#include <stdio.h>
int cifre(int x);
int main()
{
    int numero,cifra;
    printf("dammi un numero ");
    scanf("%d",&numero);
    cifra=cifre(numero);
}
int cifre(int x)
{
    int cont=0;
    if(x<=0)
    {printf("numero non valido");}
    do 
   { x=x/10;
    cont ++; }
    while(x>0);
    printf("le cifre sono %d",cont);
    return x;
}