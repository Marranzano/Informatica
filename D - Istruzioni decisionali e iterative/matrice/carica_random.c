#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIGHE 5   // Numero di righe
#define COLONNE 7   // Numero di colonne

void carica_random(int m[][COLONNE], int dim_r, int dim_c);
void stampa(int m[][COLONNE], int dim_r, int dim_c)
int main() {
    int mat[RIGHE][COLONNE];
    carica_random(mat, RIGHE, COLONNE);

  

    return 0;
}

// Funzione che carica valori casuali nella matrice
void carica_random(int m[][COLONNE], int dim_r, int dim_c) {
  
    srand(time(NULL));

    for (int i = 0; i < dim_r; i++) {
        for (int j = 0; j < dim_c; j++) {
            m[i][j] = rand() % 100;  
        }
    }
}
void stampa(int m[][COLONNE], int dim_r, int dim_c) {
    for (int i = 0; i < dim_r; i++) {
        for (int j = 0; j < dim_c; j++) {
            printf("%2d ", m[i][j]);  // Stampa ogni elemento della matrice
        }
        printf("\n");  // Vai a capo dopo ogni riga
    }
}
