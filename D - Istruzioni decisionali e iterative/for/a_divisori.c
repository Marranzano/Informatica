/*
	file: a_divisori.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 17/11/2024
	Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
	input_: nr intero
	elaborazione: controllo i divisori
	output divisori
*/
# include <stdio.h>
int main()
{
int num, divisore;
printf("dammi un numero ");
scanf("%d",&num);
for(divisore=1; num>=divisore; divisore++)
{
	{ if(num % divisore==0)
	{printf("%d \n",divisore); } //stampa i divisori
	}
}

return 0;
}
