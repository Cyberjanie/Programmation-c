#include <stdio.h>

int main(void)
{
    float notes [5];
    float somme = 0.0;
    float moyenne;

    {
    for (int i = 0; i < 5 ; i ++ )
    {
        printf("veuillez entrer la note : ");
        scanf("%f", &notes[i]);
        somme += notes [i];

    }

    moyenne = somme / 5;
    printf("la moyenne est %.1f\n", moyenne);

    }
}
