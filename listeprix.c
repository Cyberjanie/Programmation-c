#include <stdio.h>

int main(void) {
    float prix[10];        // Tableau pour 5 articles
    float total = 0.0;    // Somme des prix
    float totaltps = 0.0;  // total avec tps
    float totaltpstvq = 0.0; // total tpstvq

    for (int i = 0; i < 10; i++) {
        printf("Entrez le prix de l'article %d : ", i + 1);
        scanf("%f", &prix[i]);

        total += prix[i];  // On ajoute directement au total
        totaltps = (total * 0.05)+ total;
        totaltpstvq = (total * 0.0975) + totaltps;

    }


    printf("\nTotal de la facture : %.2f $\n", totaltpstvq);
    return 0;
}
