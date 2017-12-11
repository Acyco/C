#include <stdio.h>

#define SIZE 8

int main (void)
{
    double numa[SIZE];
    double numb[SIZE];
    int i = 0;
    int j;

    while (i < SIZE && (scanf ("%lf", &numa[i]) == 1))
    {
        numb[i] = 0;
        for (j = 0; j <= i; j++)
            numb[i] += (double)numa[j];
        i++;
    }
    for (i = 0; i < SIZE; i++)
        printf ("%.2f\t", numa[i]);
    printf ("\n");
    for (i = 0; i < SIZE; i++)
        printf ("%.2f\t", numb[i]);
    printf ("\n");
    return 0;
}
