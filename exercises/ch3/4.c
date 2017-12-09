#include <stdio.h>

int main (void)
{
    float f;
    printf ("Enter a float: ");
    scanf ("%f", &f);
    printf ("The input is %f or %e\n", f, f);
    return 0;
}
