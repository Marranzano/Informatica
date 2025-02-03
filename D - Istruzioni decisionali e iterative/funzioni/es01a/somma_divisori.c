#include <stdio.h>

// Dichiarazione della funzione
int somma_divisori(int x);

int main() {
    int a, somma;

    // Input dall'utente
    printf("Inserisci un numero: ");
    scanf("%d", &a); // Corretto il nome della variabile e la sintassi

    somma = somma_divisori(a); // Chiamata della funzione corretta

    return 0;
}

// Definizione della funzione somma_divisori
int somma_divisori(int x) {
    int m = 0; // Inizializzo la variabile m a 0

    // Ciclo per trovare i divisori
    for (int cont = 1; cont <= x; cont++) {
        if (x % cont == 0) {
            m = m + cont; // Aggiungo il divisore alla somma
        }
    }

    printf("La somma dei divisori e' %d\n", m); // Stampa della somma
    return m; // Restituisco la somma
}
