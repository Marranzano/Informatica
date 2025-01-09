/*scrivere un programma C che utilizzi un ciclo do-while per visualizzare un menu 
e chiedere all'utente di inserire una voce del menu fino a quando non sceglie 0=uscita. 
In caso di uscita prima di terminare il ciclo del menu visualizzare un saluto
Stampare a schermo la scelta effettuata dall’utente. */
#include <stdio.h>

int main() {
    int scelta;

    do {
        // Visualizzazione del menu
        printf("\nMenu:\n");
        printf("1. Opzione 1\n");
        printf("2. Opzione 2\n");
        printf("3. Opzione 3\n");
        printf("0. Uscita\n");
        printf("Inserisci la tua scelta: ");

        // Lettura della scelta dell'utente
        scanf("%d", &scelta);

        // Gestione delle opzioni
        switch (scelta) {
            case 1:
                printf("Hai scelto Opzione 1.\n");
                break;
            case 2:
                printf("Hai scelto Opzione 2.\n");
                break;
            case 3:
                printf("Hai scelto Opzione 3.\n");
                break;
            case 0:
                printf("Uscita selezionata. Arrivederci!\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
                break;
        }

    } while (scelta != 0);

    return 0;
}
