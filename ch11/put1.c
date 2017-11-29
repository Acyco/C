/* put1.c -- 不添加换行符打印一个字符串 p295 */
#include <stdio.h>
void put2 (const char * string )// 不会改变这个字符串
{
    while (*string != '\0')
        putchar(*string++);
    putchar("\n");
}

int main (void)
{
    put2 ("hahahah");
    return 0;
}
