/* postage.c -- 类邮贷费率 p133 */
#include <stdio.h>

int main(void)
{
    const int FIRST_OZ = 37;
    const int NEST_OZ = 23;
    int ounces, cost;

    printf(" ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <=16; ounces++,
         cost += NEST_OZ)
        printf("%5d %4.2f\n", ounces, cost/100.0);
    return 0;
        
}
