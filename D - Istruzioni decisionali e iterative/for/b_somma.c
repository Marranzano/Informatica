/*
	file: b_somma.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 27/11/2024
    Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
	input_: nr intero
	elaborazione: controllo i divisori
	output divisori
*/
#include <stdio.h>

int main() {
    int a, b;

    // Ciclo per trovare tutte le coppie (a, b) dove a + b = 15
    for (a = 0; a <= 15; a++) {
        b = 15 - a;  // calcola b in base a
        printf("(%d+%d)\n", a, b);  // stampa la coppia
    }

    return 0;
}
