#include <stdio.h>
int main (void)
{
    int i = 2147483647;
    float j = 33333333333333333333.0f;
    float k = 0.00000000000000000001f;
    printf ("%d %d %d\n", i, i+1, i+2);
    printf ("%f %f %f\n", j, j+0.1, j+0.2);
    printf ("%.100f %f %.100f\n", k, k+0.1, k+0.2);
    return 0;
}
