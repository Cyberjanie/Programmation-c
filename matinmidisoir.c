#include <stdio.h>
#include <math.h>

int main(void)

{
    int heure = -1;

    while (heure < 0 || heure > 23)
        {
        printf("quelle heure est-il?\n");
        scanf("%d", &heure);

        if (heure < 0 || heure > 23)
        {
            printf("erreur, veuillez entrer un chiffre entre 0 et 23\n");
        }
        }
    if (heure >= 5 && heure <= 10 )
        {
        printf("c'est le matin, bonne journée!\n");
        }

    else if (heure >= 11 && heure <= 17)
        {
        printf("c'est l'après-midi !\n");
        }

    else if (heure >= 18 && heure <= 23)
        {
        printf("c'est le soir, bonne soirée!\n");
        }

    else if (heure >= 0 && heure <= 4)
        {
        printf("c'est la nuit, au dodo!\n");
        }
        return 0;
    }


