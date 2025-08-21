#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt the user for their first name
    // and greet them with a message.   
    printf("Quel est ton prénom ?\n");
    scanf("%s", prenom);

printf("Bonjour, %s\n", prenom);

    }

// This program prompts the user for their first name and greets them.
// It uses the CS50 library to handle string input.