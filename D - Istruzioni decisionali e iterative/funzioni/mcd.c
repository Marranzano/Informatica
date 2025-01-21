#include <stdio.h>
int MCD(int x, int y);
void semplificata(int x, int y, int z);
int main()
{
    int a,b,r, cont;
    for(cont=0;cont<5;cont++)
    {
        printf("dammi due nr\n");
        scanf("%d%d",&a,&b);
        r=MCD(a,b);
        semplificata(a,b,r);
    }
    return 0;
}
int MCD(int x, int y)
{
    while (x!=y)
    {
        if(x>y)
        {   
            x=x-y; }
        else
        {
            y=y-x;
        }
    return x;
    }
}
void semplificata(int x, int y, int z)
{
    x=x/z;
    y=y/z;
    printf("la frazione semplificata e' %d / %d \n",x,y);
}