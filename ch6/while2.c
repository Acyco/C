/* while2.c -- 注意分号的使用 */
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n++ < 3);    // 注意这里的分号
        printf("n is %d\n", n);
    printf("That's all this program does.\n");
    return 0;
}
