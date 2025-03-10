/* Ricerca di un Elemento
Dichiari e inizializzi un array di 15 numeri con numeri random tra 0 e 20
Chieda all'utente un numero da cercare
Verifichi se il numero è presente nell'array
Stampi la posizione del numero se presente, altrimenti un messaggio appropriato */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int vet[21];

    // inizializzazione del generatore di numeri casuali
    // altrimenti i numeri generati saranno sempre gli stessi
    srand(time(NULL)); 

    // inizializzo il vettore con numeri casuali
   
    printf("\n");
    for (int i = 1; i < 21; i++) {
        //generiamo un numero random tra 0 e 9 compresi
        vet[i] = rand() % 21;
    }   
printf("dimmi un nr");
scanf("%d",);
for (int i=0; i<1;i++)
{
if 

}



}

