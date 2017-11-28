/* some_data.c -- 部分初始化的数组 p246 */
#include <stdio.h>

#define SIZE 4

int main (void)
{
    int no_data[SIZE] = {1942, 1066}; // 部分初始化的数组
    int i;

    printf ("%2s%14s\n",
            "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf ("%2d%14d\n", i, no_data[i]);

    return 0;
}
