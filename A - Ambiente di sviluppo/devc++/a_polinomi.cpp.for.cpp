/*
	file_ a_polinomi
	autore: Leonardo Marranzano
	classe: 3H
	data: 30/09/2024

	calcolo la y con 10 valori di x
	input: a, b, c 
	elaborazione: dati dieci valori di x stabilisco y
	output: y
*/
	#include <stdio.h> //printf, scanf
		int main()
{
	//dichiariamo le tre variabili
	int a, b, c;
	int y[10];
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("inserisci la variabile a: ");
	scanf("%d", &a);
	printf("inserisci la variabile b: ");
	scanf("%d", &b);
	printf("inserisci la variabile c: ");
	scanf("%d", &c);
/*	for(int i = 0; i<10; i++){
		y[i]= a*x[i]* x[i] + b*x[i] + c;
	printf("y e' uguale a %d \n " ,  y[i]);
	}
*/
	y[0]= a*x[0]* x[0] + b*x[0] + c;
	y[1]= a*x[1]* x[1] + b*x[1] + c;
	y[2]= a*x[2]* x[2] + b*x[2] + c;
	y[3]= a*x[3]* x[3] + b*x[3] + c;
	y[4]= a*x[4]* x[4] + b*x[4] + c;
	y[5]= a*x[5]* x[5] + b*x[5] + c;
	y[6]= a*x[6]* x[6] + b*x[6] + c;
	y[7]= a*x[7]* x[7] + b*x[7] + c;
	y[8]= a*x[8]* x[8] + b*x[8] + c;
	y[9]= a*x[9]* x[9] + b*x[9] + c;
	printf("y 1 e' uguale a %d \n" , y[0]);
	printf("y 2 e' uguale a %d \n" , y[1]);
	printf("y 3 e' uguale a %d \n" , y[2]);
	printf("y 4 e' uguale a %d \n" , y[3]);
	printf("y 5 e' uguale a %d \n" , y[4]);
	printf("y 6 e' uguale a %d \n" , y[5]);
	printf("y 7 e' uguale a %d \n" , y[6]);
	printf("y 8 e' uguale a %d \n" , y[7]);
	printf("y 9 e' uguale a %d \n" , y[8]);
	printf("y 10 e' uguale a %d \n", y[9]);
}
