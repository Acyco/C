#include <stdio.h>

int main (void)
{
    int num;
    int i;
    scanf ("%d", &num);
    for (i = num; i <=num + 10; i++)
        printf ("%d ", i);
    printf ("\n");
    return 0;
}
