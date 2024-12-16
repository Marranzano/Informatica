#include <stdio.h>

int main() 
{
    int Num, fatton = 1;
    printf("Inserisci un numero intero maggiore di zero: ");
    scanf("%d", &Num);
		for (int i = 1; i <= Num; i++) 
        {
			fatton *= i;
    	}
    // Stampa del risultato
    printf("Il fattoriale di %d è: %d\n", Num, fatton);

    return 0;
}