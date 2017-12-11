#include <stdio.h>
#include <math.h>

int main (void)
{
    int nums[8];
    int i, j;
    for (i = 0; i < 8; i++)
        nums[i] = pow (2, i);
    i = 0;
    do
    {
        printf ("%d ", nums[i]);
        i++;
    }while (i < 8);
    printf ("\n");
    return 0;
}
