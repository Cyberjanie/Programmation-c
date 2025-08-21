#include <math.h>
#include <stdio.h>

int main(void)

{
    int resultat, nombre1=0, nombre2=0;
    printf("entrer le nombre1\n: ");
    scanf("%d", &nombre1);
    printf("entrer le nombre 2\n :");
    scanf("%d", &nombre2);
    resultat=nombre1+nombre2;
    printf("%d+%d=%d\n", nombre1, nombre2, resultat);
}
