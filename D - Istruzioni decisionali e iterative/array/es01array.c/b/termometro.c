#include <stdio.h>

int main() {
    float temperature[24];
    float maxTemp, minTemp, sum = 0;
    int maxHour = 0, minHour = 0;

    // Inserimento delle temperature
    printf("Inserisci le temperature per ogni ora della giornata:\n");
    for (int i = 0; i < 24; i++) {
        printf("Ora %d: ", i);
        scanf("%f", &temperature[i]);
        
        // Calcolo della somma per la media
        sum += temperature[i];

        // Determinazione della temperatura massima e minima
        if (i == 0 || temperature[i] > maxTemp) {
            maxTemp = temperature[i];
            maxHour = i;
        }
        if (i == 0 || temperature[i] < minTemp) {
            minTemp = temperature[i];
            minHour = i;
        }
    }

    // Calcolo dell'escursione termica e temperatura media
    float escursione = maxTemp - minTemp;
    float media = sum / 24;

    // Output dei risultati
    printf("\nTemperatura massima: %.2f°C alle ore %d\n", maxTemp, maxHour);
    printf("Temperatura minima: %.2f°C alle ore %d\n", minTemp, minHour);
    printf("Escursione termica: %.2f°C\n", escursione);
    printf("Temperatura media giornaliera: %.2f°C\n", media);
    
    return 0;
}
