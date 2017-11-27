/* echo.c -- 重复输入 p188 */
#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);
    return 0;
}

