/*scrivere un programma C che utilizzi un ciclo do-while per visualizzare un menu 
e chiedere all'utente di inserire una voce del menu fino a quando non sceglie 0=uscita. 
In caso di uscita prima di terminare il ciclo del menu visualizzare un saluto
Stampare a schermo la scelta effettuata dall’utente. */
#include <stdio.h>
int main() {
    int scelta;

    do {
        // Visualizzazione del menu con colori 
        printf("\033[31mMenu:\n");      // Colore rosso per il menu, nero per il testo
        printf("\033[30m1. Opzione 1\n");  
        printf("\033[30m2. Opzione 2\n");  
        printf("\033[30m3. Opzione 3\n");  
        printf("\033[30m0. Uscita\n");  
        
        // Chiedere all'utente di inserire una scelta
        printf("\033[31mInserisci la tua scelta: \033[30m");  
        scanf("%d", &scelta);
        // Stampare la scelta effettuata
        if (scelta != 0) {
            printf("\033[31mHai scelto l'opzione %d\n", scelta);  
        }
    } while (scelta != 0); // 
    printf("\033[31mArrivederci!\n");  
    return 0;
}