#include <stdio.h>

void afficher_coeur(int n);

int main(void)
{
    int n;
    printf("combien de coeur veux-tu ? : ");
    scanf("%d", &n);
    afficher_coeur(n);
    return 0;
}

void afficher_coeur(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
    printf("<3 ");
    }
     printf("\n");
}
