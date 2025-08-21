#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float x = get_float("what's x ? ");
    float y = get_float("what's y ? ");
    {
        if (x < y)
            printf("x is less than y \n");

        else if (x > y)
            printf("y is less than x \n");

        else
            printf("x equal y \n");
    }
}
