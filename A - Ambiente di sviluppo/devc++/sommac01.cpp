/*
	file: somma_interi.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 25/09/24
	
	somma di due numeri interi letti da tastiera e stampa a schermo del risultato
	
	Input: due numeri interi
	Elaborazione: somma
	Output: un numero intero
	*/
	
	#include <stdio.h> //printf, scanf
	
	int main()
	{
	//dichiariamo le due variabili input
	int num1, num2;
	//e output
	int ris;

	//input: due numeri interi
	printf("inserisci il primo numero ");
	scanf("%d", &num1);
	printf("inserisci il secondo numero ");
	scanf("%d", &num2);
	
	//Elaborazione: somma
	//assegna alla variabile ris
	//il risultato della espressione num1 + num2
	ris = num1 + num2;
	
	//Output: un numero intero
	printf("la somma di due numeri e' %d", ris);
	
	//termino il programma
	return 0;
	}
