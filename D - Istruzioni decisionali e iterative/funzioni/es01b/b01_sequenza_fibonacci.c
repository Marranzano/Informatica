#include <stdio.h>
void sequenza(int x);
int main() {
    int num;
    
    printf("Inserisci un numero intero: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Inserire un numero intero positivo.\n");
    } else {
        sequenza(num);
    }
    
    return 0;
}
void sequenza(int x)
{
    int n=0, n2=1, successivo;
    if (x<=0)
    {printf("inserisci un nr pos");
    return;
    }
printf("sequenza fino a %d \n",x);

printf("%d",n);
for(int cont=1;cont<=x; cont++)
    {
    successivo=n+n2;
    printf("%d ",successivo);
    n=n2;
    n2=successivo;
    }
}