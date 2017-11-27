/* echo_eof.c -- 重复输入 p191 */
#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}

