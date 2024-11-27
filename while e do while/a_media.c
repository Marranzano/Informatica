/*
	file: a_media.c
	autore: Leonardo Marranzano
	classe: 3H
	data: 07/11/2024
	scrivere un programma C che visualizzi sul monitor la media di una sequenza di interi letti da tastiera.
	La sequenza termina appena si digita zero. Allegare diagramma di flusso e tabella di traccia
	*/
	
	#include <stdio.h>
int main() 
{
    int numero,volte,sommanum;
    float media;
    numero=0;
    volte=-1;
    sommanum=0;
	do 
	{
		printf("Inserisci un numero: ");
        scanf("%d", &numero);        
		sommanum= sommanum+numero;
        volte=volte+1;
    } while (numero!=0);
    printf("la somma e'%d\n",sommanum);
    media= (float)sommanum/volte;
	printf("la media e'%.2f",media);
    return 0;
}

