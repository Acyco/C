/* altnames.c -- 可移植的整数类型名 p47 */
#include <stdio.h>
#include <inttypes.h>   // 支持可移植类型

int main(void)
{

    int16_t me16;       // me16是一个16位有符号变量

    me16 = 4593;
    printf("First assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, let's no make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me16 = %* PRId *\n", me16);
    return 0;
}
