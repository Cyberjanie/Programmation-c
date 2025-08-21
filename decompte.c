#include <stdio.h>

void decompte (int n);

int main(void)
{
    int n ;
    printf("choisissez un nombre :  ");
    scanf("%d", &n);

    decompte (n);
    return 0;
}


void decompte (int n)
{
    for (int i = n; i > 0; i--)
    {
    printf("%d\n", i);
    }
    printf("BOOM\n");
}
