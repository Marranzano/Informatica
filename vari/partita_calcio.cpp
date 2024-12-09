/*
file:partita_calcio
autore: Leonardo Marranzano
classe: 3H
data: 11/10/2024

chiesto all'utente il risultato di una partita vedo il risultato con una frase opportuna

input: un numero intero per il risultato della partita se 0 pareggio se 1 vince casa se 2 vince la trasferta
elaborazione: controllo il risultato
output: frase opportuna per il risultato
*/
#include <stdio.h>

int main ()
{
	int ris;
	printf("scrivi il risultato della partita:\nscrivi il numero 0 se il risultato e' un pareggio \nscrivi 1 se ha vinto la squadra di casa \nscrivi 2 se ha vinto la squadra di trasferta\n");
	scanf("%d",&ris);
	switch(ris)
	{
		case 0:
			printf("la partita e' finita in pareggio"); break;
			case 1:
				printf("ha vinto la squadra di casa"); break;
				case 2: 
				printf("ha vinto la trasferta"); break;
				default:
					printf("errore numero inserito sbagliato");
	}
}
