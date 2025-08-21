#include <stdio.h>

int main(void)
{

    // Prompt the user for their first name
    // and greet them with a message.
    char prenom[50]; // Declare a character array to hold the name
    printf("Quel est ton prénom ?\n");
    scanf("%s", prenom);

    printf("Bonjour, %s\n", prenom);
    // Return 0 to indicate successful completion
    return 0;
}

