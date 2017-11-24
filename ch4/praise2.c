/* praise1.c -- 使用不同类型的字符串 p62 */
#include <stdio.h>
#include <string.h> /*  提供strlen()函数的原型 */
#define PRAISE "What a super marvlous name! "

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n", 
           strlen(name), sizeof name);
    printf("The phrase of praise has %d letters.", 
           strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof PRAISE);
    return 0;
}
