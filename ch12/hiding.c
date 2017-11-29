/* hiding.c -- 代码块内的变量 p324 */
#include <stdio.h>

int main (void)
{
    int x = 30;   // 初始化 x
    printf (" x in outer block： %d\n", x);
    {
        int x = 77;
        printf (" x in inner block： %d\n", x);
    }
    printf (" x in outer block： %d\n", x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf (" x in while loop： %d\n", x);
    }
    printf (" x in outer block： %d\n", x);
    return 0;
}
