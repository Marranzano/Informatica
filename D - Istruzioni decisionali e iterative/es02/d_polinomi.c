/*
	file_ d_polinomi
	autore: Leonardo Marranzano
	classe: 3H
	data: 02/10/2024

	calcolo la y con 10 valori di x
	input: a, b, c 
	elaborazione: dati dieci valori di x stabilisco y
	output: y
*/
	#include <stdio.h> //printf, scanf
		int main()
{
	//dichiariamo le tre variabili
	int a, b, c,x,y;
	 x = 4;
	 printf("x e' uguale a 4 \n");
	printf("inserisci la variabile a: ");
	scanf("%d", &a);
	printf("inserisci la variabile b: ");
	scanf("%d", &b);
	printf("inserisci la variabile c: ");
	scanf("%d", &c);
	y= a*x*x + b*x+ c;
	printf("y e' uguale a %d \n" , y);

	//termino il programma
	return 0;
}
