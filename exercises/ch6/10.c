#include <stdio.h>

int main (void)
{
    int num[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i;
    for (i = 8; i >0 ; i--)
        printf ("%d ", num[i - 1]);
    printf ("\n");
    return 0;
}
