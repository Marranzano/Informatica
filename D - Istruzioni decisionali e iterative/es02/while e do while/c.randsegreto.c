#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSegreto, tentativo, tentativi = 0;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

    // Genera un numero segreto casuale tra 1 e 100
    numeroSegreto = rand() % 100 + 1;

    // Chiede all'utente di indovinare il numero
    printf("Indovina il numero segreto tra 1 e 100:\n");

    // Continua a chiedere finché l'utente non indovina il numero
    do {
        printf("Inserisci il tuo tentativo: ");
        scanf("%d", &tentativo);
        tentativi++;

        if (tentativo < numeroSegreto) {
            printf("Il numero segreto è maggiore.\n");
        } else if (tentativo > numeroSegreto) {
            printf("Il numero segreto è minore.\n");
        } else {
            printf("Complimenti! Hai indovinato il numero segreto in %d tentativi.\n", tentativi);
        }
    } while (tentativo != numeroSegreto);

    return 0;
}
