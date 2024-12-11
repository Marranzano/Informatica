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
	int a, b, c,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,y1,y2,y3,y4,y5,y6,y7,y8,y9,y10;
	a=2;
	b=4;
	c=3;
	x1=2;
	x2=3;
	x3=4;
	x4=5;
	x5=6;
	x6=7;
	x7=8;
	x8=9;
	x9=10;
	x10=11;
	y1= a*x1*x1 + b*x1 + c;
	y2= a*x2*x2 + b*x2 + c;
	y3= a*x3*x3 + b*x3 + c;
	y4= a*x4*x4 + b*x4 + c;
	y5= a*x5*x5 + b*x5 + c;
	y6= a*x6*x6 + b*x6 + c;
	y7= a*x7*x7 + b*x7 + c;
	y8= a*x8*x8 + b*x8 + c;
	y9= a*x9*x9 + b*x9 + c;
	y10= a*x10*x10 + b*x10 + c;
	printf("y 1 e' uguale a %d \n" , y1); printf("y 2 e' uguale a %d \n" , y2);
	printf("y 3 e' uguale a %d \n" , y3); printf("y 4 e' uguale a %d \n" , y4);
	printf("y 5 e' uguale a %d \n" , y5); printf("y 6 e' uguale a %d \n" , y6);
	printf("y 7 e' uguale a %d \n" , y7); printf("y 8 e' uguale a %d \n" , y8);
	printf("y 9 e' uguale a %d \n" , y9); printf("y 10 e' uguale a %d \n" , y10);

	//termino il programma
	return 0;
}
