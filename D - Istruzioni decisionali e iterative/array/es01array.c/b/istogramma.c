#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10]; // Dichiarazione dell'array

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Riempire l'array con numeri casuali tra 0 e 20
    printf("Array generato:\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 21;
        printf("%d ", arr[i]);
    }
    printf("\n\nIstogramma:\n");

    // Creazione dell'istogramma
    for (int i = 0; i < 10; i++) {
        printf("%d | ", arr[i]);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}