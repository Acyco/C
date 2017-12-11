#include <stdio.h>

int main (void)
{
    int i, j;
    printf ("Please enter 2 numbers:");
    scanf ("%d %d", &i, &j);
    for (;i <= j; i++)
        printf ("%d %8d %8d\n", i, i * i, i * i * i);
    return 0;
}
