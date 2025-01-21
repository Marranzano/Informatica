#include <stdio.h>

// Prototipo della funzione
int calcolaMCD(int x, int y);

int main() 
{
    int num1, num2;
    printf("Inserisci due numeri interi per calcolare il MCD: ");
    scanf("%d %d", &num1, &num2);
    int mcd = calcolaMCD(num1, num2);
    return 0;
}

// Definizione della funzione per calcolare il MCD
int calcolaMCD(int x, int y)
{
    while (y != 0) {
        int resto = x % y;
        x = y;
        y = resto;
    }
    // Output del risultato
    printf("Il MCD e' %d",x);
    return x;
}
