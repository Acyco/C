#include <stdio.h>

int main (void)
{
    int input;
    float sum1, sum2;
    int i;
    scanf ("%d", &input);

    for (i = 1; i <= input; i++ )
    {
        sum1 += 1.0/ (float)i;
        if(i % 2 == 0)
            sum2 -= 1.0/ (float)i;
        else
            sum2 += 1.0/ (float)i;
    }
    printf ("sum1:%f sum2:%f\n", sum1, sum2);
    return 0;
}
