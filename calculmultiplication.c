#include <math.h>
#include <stdio.h>

int main(void)

{
    int resultat = 0, nombre1 = 0, nombre2 = 0;
    printf("quel est le premier nombre ?");
    scanf("%d", &nombre1);
    printf("quel est le deuxième nombre ?");
    scanf("%d", &nombre2);
    resultat = nombre1 * nombre2;

    printf("%d x %d = %d\n", nombre1, nombre2, resultat);
}
