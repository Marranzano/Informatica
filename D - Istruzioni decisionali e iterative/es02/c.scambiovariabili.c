/*
	file_ c.scambiovariabili
	autore: Leonardo Marranzano
	classe: 3H
	data: 30/09/2024

	scambio il varole di due variabili
	input: le due variabili
	elaborazione: lo scambio
	output: le variabili scambiate
*/
	#include <stdio.h> //printf, scanf
		int main()
	{
	//dichiariamo le tre variabili
	int var1, var2, varscambio;
	
	//input: lati del trapezio e altezza
	var1 = 4;
	var2 = 6;
	printf("la variabile 1 e' 4 \n");
	printf("la variabile 2 e' 6 \n");
	//Elaborazione: scambio i numeri utilizzando una terza variabile
	//output: vedo i numeri scambiati
	varscambio = var1;
	var1= var2;
	var2 = varscambio;
	printf("adesso il valore della variabile n1 e' uguale a: %d \n", var1 );
	printf("adesso il valore della variabile n2 e' ugugale a: %d", var2 );
	//termino il programma
	return 0;
	}
