/* put2.c -- 不添加换行符打印一个字符串 p295 */
#include <stdio.h>
int put2 (const char * string )// 不会改变这个字符串
{
    int count;
    while (*string != '\0')
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}

int main (void)
{
    put2 ("hahahah");
    return 0;
}
