#include <stdio.h>

void print_row(int n);
int main(void)

{

    // print n rows
    const int n = 4;
    for (int i = 0 ; i < n ; i++)
    {
        print_row(n);
    }

}


void print_row(int n)
{
        for (int i = 0 ; i < n ; i++)
        {
            printf("#");
        }
        printf("\n");
}

void print_col(int n)
{
        for (int i = 0 ; i < n ; i++)
        {
            printf("#");
        }
        printf("\n");
}

