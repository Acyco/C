/* wheat.c -- 指数增长 p91 */
#include <stdio.h>

#define SQUARES 64      /* 横盘上的方格数 */
#define CROR 1E15       /* 以粒计的美国小麦产量 */

int main(void)
{
    double current, total;
    int count = 1;

    printf("square  grains  total   ");
    printf("fraction of \n");
    printf("    added   grain   ");
    printf("US total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current,
           total, total/CROR);
    while(count <SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;    /* 下个方格的粒数加倍 */
        total = total + current;    /* 更新总数 */
        printf("%4d %13.2e %12.2e %12.2e\n", count, current,
               total, total/CROR);
    }
    printf("That's all.\n");
    return 0;
}
