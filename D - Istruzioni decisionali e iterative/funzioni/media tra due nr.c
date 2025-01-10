#include <stdio.h>
#define c 8
#define d 6
float media(int,int);
int main()
{
    float k;
    int a=5,b;
    printf("dammi un numero\n");
    scanf("%d",&b);
    k=media(a,b);
    printf("la media tra due nr uno scelto da un'utente e uno scelto dal computer e'%.1f\n",k);
    k=media(c,d);
    printf("la media tra due costanti e'%.1f",k);
}
float media(int x, int y)
{
float m;
m=(x+y)/2.0;
return m; 
}