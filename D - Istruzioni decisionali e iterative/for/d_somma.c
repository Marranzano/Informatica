#include <stdio.h>
int main()
{
int num,somma,cont;
somma=0;
for(cont=1;cont<=10;cont++)
{
    printf("dammi un numero");
    scanf("%d",&num);
    somma+=num;
}
    printf("%d\n",somma);
    return 0;
}