#include <stdio.h>

int main(void)
{
    float article[5]= {2, 15, 9.99, 22, 10.01};
    int nombresup10 = 0 ;

    for (int i = 0 ; i < 5 ; i++)
    {
     if (article[i] > 10)
     {
    nombresup10 ++;
     }
    }


    printf("il y a %d de nombre au dessus de 10\n", nombresup10);

}
