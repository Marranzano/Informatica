#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vet[15]; // Array di 15 elementi
    int num, trovato = 0;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Inizializzazione del vettore con numeri casuali tra 0 e 20
    printf("Array generato: \n");
    for (int i = 0; i < 15; i++) {
        vet[i] = rand() % 21;
        printf("%d ", vet[i]);
    }
    printf("\n");

    // Richiesta all'utente di un numero da cercare
    printf("Dimmi un numero da cercare: ");
    scanf("%d", &num);

    // Ricerca del numero nell'array
    for (int i = 0; i < 15; i++) {
        if (vet[i] == num) {
            printf("Numero %d trovato alla posizione %d\n", num, i);
            trovato = 1;
        }
    }

    // Se il numero non è stato trovato
    if (!trovato) {
        printf("Numero %d non trovato nell'array.\n", num);
    }

    return 0;
}


}

