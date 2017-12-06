/* subst.c -- 在字符串中进行替换 p453 */
#include <stdio.h>

#define PSQR(X) printf ("The squaer of " #X " is %d.\n", ((X)*(X)))


int main (void)
{
    int y = 5;
    PSQR(y);
    PSQR(2 + 4);

    return 0;
}
