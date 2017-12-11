#include <stdio.h>

int main (void)
{
    float cl = 100.0;
    int i = 0;

    while (cl >0)
    {
        cl += cl * 0.08;
        cl -= 10;
        i++;
    }
    printf ("%d\n", i);
    return 0;
}
