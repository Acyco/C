#include <stdio.h>

int main (void)
{
    float k = 2.45;
    int inch;

    printf ("Please enter a inches:");
    scanf ("%d", &inch);
    printf ("%f\n", (double)inch * k);
    return 0;
}
