/**
 * @file es_battaglia_navale_step1.c
 * @brief Battaglia Navale - Step 1: Inizializzazione e visualizzazione del campo di gioco
 * @author Mario Rossi
 * @version 1.0 01/04/25 Versione iniziale
 * 
 * @details
 * OBIETTIVO DELL'ESERCIZIO:
 * Creare la struttura base del gioco Battaglia Navale, implementando le funzioni
 * necessarie per inizializzare e visualizzare il campo di gioco.
 * 
 * ANALISI DEI REQUISITI:
 * 1. Creare una matrice di dimensione 5x5 per rappresentare il campo di gioco
 * 2. Inizializzare la matrice con il carattere '~' che rappresenta l'acqua
 * 3. Visualizzare il campo di gioco con indici di riga e colonna
 * 4. Utilizzare una struttura modulare con funzioni separate per inizializzazione e visualizzazione
 */
#include <stdio.h>

#define DIMENSIONE 5

/* Prototipi delle funzioni */
/**
 * @brief Funzione per inizializzare il campo con acqua
 * 
 * @param campo La matrice da inizializzare
 */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
/**
 * @brief Funzione per visualizzare il campo
 * 
 * @param campo La matrice da visualizzare
 */
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE]);

/**
 * @brief Funzione principale
 * 
 * @return int Codice di uscita del programma
 */
int main() {
    char campo[DIMENSIONE][DIMENSIONE];
    inizializzaCampo (campo);
    visualizzaCampo (campo);
}

/* Implementazione delle funzioni */
void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) 
    {
        char c= '~';
        for(int i=0; i<DIMENSIONE;i++)
        { for(int j=0; j<DIMENSIONE;j++)
            { campo[i][j]= c ; }
         } }

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE])
{               
            for(int i=0; i<DIMENSIONE; i++)
            {
                for(int j=0; j<DIMENSIONE; j++)
                {
                        printf("%c", campo[i][j]);
                }
                printf("\n");
            }
}