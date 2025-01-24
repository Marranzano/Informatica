#include <stdio.h>

// Prototipi delle funzioni
int arearettangolo(int x, int y);
int calcolaMCD(int x, int y);
int somma_divisori(int x);
void menu();

// Funzione principale
int main() {
    menu(); // Avvia il menu
    return 0;
}

// Definizione della funzione per calcolare l'area del rettangolo
int arearettangolo(int x, int y)
{
    int m;
    m= x*y;
    printf("L'area del rettangolo è: %d \n", m);
    return m;

}
// Definizione della funzione per calcolare il MCD (algoritmo di Euclide)
int calcolaMCD(int x, int y)

{   while (y != 0) {
        int resto = x % y;
        x = y;
        y = resto;
        printf("Il massimo comune divisore è: %d\n",  y); 
        } 
} 
    

// Definizione della funzione per calcolare la somma dei divisori
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

// Definizione della funzione menu
void menu() {
    int scelta;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Calcola l'area di un rettangolo\n");
        printf("2. Calcola il MCD di due numeri\n");
        printf("3. Calcola la somma dei divisori di un numero\n");
        printf("0. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: {
                int base, altezza;
                printf("Inserisci la base: ");
                scanf("%d", &base);
                printf("Inserisci l'altezza: ");
                scanf("%d", &altezza);
                int area = arearettangolo(base, altezza);
                break;
            }
            case 2: {
                int num1, num2;
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                int risultato = calcolaMCD(num1, num2);
                break;
            }
            case 3: {
                int numero;
                printf("Inserisci un numero: ");
                scanf("%d", &numero);
                int somma = somma_divisori(numero);
                break;
            }
            case 0:
                printf("Uscita dal programma. Arrivederci!\n");
                break;
            default:
                printf("Opzione non valida. Riprova.\n");
                break;
        }
    } while (scelta != 0);
}