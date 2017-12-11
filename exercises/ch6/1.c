#include <stdio.h>

#define SIZE 27

int main (void)
{
    char l[SIZE] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < SIZE - 1; i++) 
        printf ("%c ", l[i]);
    printf ("\n");
    return 0;
}
