/* addemup.c -- 4种类型的语句 p103 */
#include <stdio.h>

int main(void)              /* 求出前20个整数的和   */
{
    int count, sum;         /* 声明语句             */
    int day;

    count = 0;              /* 赋值语句             */
    sum = 0;                /* 同上                 */

    scanf ("%d", &day);
    while (count++ < day)    /* while                */
        sum = sum + count;  /* 语句                 */
    printf("sum = %d\n", sum);  /* 函数语句         */
    return 0;
}
