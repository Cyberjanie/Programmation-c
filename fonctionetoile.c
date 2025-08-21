#include <stdio.h>

void afficher_etoile(int n);

int main(void)
{
    int n;
    printf("combien d'étoiles veux-tu ?:\n");
    scanf("%d", &n);
    if (n > 0)

    {
    afficher_etoile(n);
    }

    else
    {
    printf("entrer un nombre magique s'il vous plait\n");
    return 0;
    }

 }

void afficher_etoile(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
    printf("*");
    }
    printf("\n");
}
