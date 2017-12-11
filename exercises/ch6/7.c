#include <stdio.h>

int main (void)
{
    float a, b;

    printf ("enter 2 float: ");
    
    while (scanf ("%f %f", &a, &b) == 2)
    {
        printf ("%f\n", (a - b) / ( a * b ));
    printf ("enter 2 float: ");
    }
    printf ("Bye!\n");
    return 0;
}
