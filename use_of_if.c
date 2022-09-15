#include <stdio.h>

/**
* main - entry point
* prints positive, negative or 0
*
* Return: Always 0 (success)
*/
int main(void)
{
        int n;

        if (n > 0)
        {
                printf("%d is positive");
        }
        else if (n < 0)
        {
                printf("%d is negative");
        }
        else
        {
                printf("%d is zero");
        }

        printf('\n');
}
