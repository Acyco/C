#include <stdio.h>

#define LETTER 'F'

int main (void)
{
    int i, j;

    for (i = 1; i <= 6; i++)
    {
        for (j = 0; j < i; j++)
            printf ("%c", LETTER - j);
        printf ("\n");
    }
    return 0;
}