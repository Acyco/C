/* bounds.c -- 超出数组的边界 p249 */
#include <stdio.h>

#define SIZE 4

int main (void)
{
    int value1 = 44;
    int arr[SIZE];
    int valul2 = 88;
    int i;

    printf ("value1 = %d, value2 = %d\n", value1, valul2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2 * i + i;
    for (i = -1; i < 7; i++)
        printf ("%2d %d\n", i, arr[i]);
    printf ("Value1 = %d , Value2 = %d\n", value1, valul2);

    return 0;
}
