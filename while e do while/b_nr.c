/*
	file: b_nr.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 07/11/2024
	Scrivere un programma in C che chiesti 2 numeri interi all’utente,
	stampi sul monitor tutti i numeri compresi fra i 2 interi. Es. se i numeri inseriti sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12.
	*/
#include <stdio.h>

int main() {
    int num1, num2, min, max;
    
    // Richiede due numeri interi all'utente
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);
    
    // Determina il minimo e il massimo tra i due numeri
    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }
    
    // Stampa i numeri compresi tra min e max
    while (min <= max) {
        printf("%d ", min);
        min++;
    }
    
    printf("\n");
    return 0;
}
