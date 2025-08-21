#include <stdio.h>

int main(void)

{
    // Prompt the user for their agreement
    // and respond accordingly.
    char c;
    printf("do you agree? \n");
    scanf(" %c", &c); // Read a single character input

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }

    return 0;

}
