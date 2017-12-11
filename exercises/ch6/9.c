#include <stdio.h>

int main (void)
{
    int u, l, i, sum;

    printf ("Enter lower and upper integer limits:");
    while ((scanf ("%d %d", &l, &u) ==2) && u > l)
    {
        for (i = l; i <= u; i++)
            sum += i * i;
        printf ("The sum of the squares from %d to %d is %d\n",
                l * l, u * u, sum);
        printf ("Enter next set of limits:");
    }
    printf ("Bye!!\n");
    return 0;
}
