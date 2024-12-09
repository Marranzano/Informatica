/*
	file: b_trapezio.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 30/09/2024
	
	calcola l’area e il perimetro di un trapezio	
	Input: base minore, base maggiore, altezza e i due lati obliqui
	Elaborazione: 
	Output: area e perimetro
	*/
	
	#include <stdio.h> //printf, scanf
	
	int main()
	{
	//dichiariamo le cinque variabili input
	int basemin, basemag, h, l1, l2;
	//e output
	int area, perimetro;

	//input: lati del trapezio e altezza
	printf("inserisci la base minore: ");
	scanf("%d", &basemin);
	printf("inserisci la base maggiore: ");
	scanf("%d", &basemag);
	printf("inserisci l'altezza: ");
	scanf("%d", &h);
	printf("inserisci il lato obliquon1: ");
	scanf("%d", &l1);
	printf("inserisci il lato obliquon2: ");
	scanf("%d", &l2);
	//Elaborazione: somma
	//assegna alla variabile ris
	//il risultato della espressione num1 + num2
	area = ((basemin + basemag)*h)/2;
	perimetro = (basemin + basemag + l1 + l2);
	//Output: area, perimetro
	printf("l'area e' %d \n", area); 
	printf("il perimetro e' %d", perimetro);
	//termino il programma
	return 0;
	}
