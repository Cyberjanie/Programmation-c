#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int mysterynumber, proposition, essai = 0;
    srand(time(NULL));
    mysterynumber = rand() % 100 + 1;

    printf("Guess the number between 1 and 100\n");

        while (1)
    {
        scanf("%d", &proposition);

            if (proposition < 1 || proposition > 100)
            {
            printf("Error. The number must be between 1 and 100\n");
            continue;
            }
            essai++;

            if (proposition < mysterynumber)
            {
            printf("The number is higher. Try again.\n");
            }

            else if (proposition > mysterynumber)
            {
            printf("The number is lower. Try again.\n");
            }

            else if (proposition == mysterynumber)
            {
            printf("Correct! You guessed the number in %d tries.\n", essai);
            break;
         }
    }
}

