#include <math.h>
#include <stdio.h>

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
    if (heure <= 5 || heure >= 18)
    {
        printf("c'est la nuit\n");
    }

    else if (heure > 5 && heure < 18)
    {
        printf("c'est le jour\n");
    }
    return 0;
}
