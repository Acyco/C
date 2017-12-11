#include <stdio.h>

int main (void)
{
    float da = 100.0;
    float de = 100.0;
    float dar = 0.0;

    while (de <= (dar+da))
    {
        dar += da * 0.1;
        de += de * 0.05; 
    }
    printf ("da: %f, de: %f\n", dar+da, de);
    return 0;
}
