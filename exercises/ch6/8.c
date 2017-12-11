#include <stdio.h>

float s (float a,float b);

int main (void)
{
    float a, b;

    printf ("enter 2 float: ");
    
    while (scanf ("%f %f", &a, &b) == 2)
    {
        printf ("%f\n", s (a, b));
    printf ("enter 2 float: ");
    }
    printf ("Bye!\n");
    return 0;
}

float s (float a, float b)
{
    return (a - b) / ( a * b );
}
