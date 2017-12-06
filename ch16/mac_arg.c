/* mac_arg.c -- 带有参数的宏 p451 */
#include <stdio.h>

#define SQUARE(X) X*X
#define PR(X) printf ("The result is %d.\n", X)

int main (void)
{
    int x = 4;
    int z;

    printf ("x = %d\n", x);
    z = SQUARE(x);
    printf ("Evaluatine SQUARE(x): ");
    PR(z);
    z = SQUARE(2);
    printf ("Evaluatine SQUARE(2): ");
    PR(z);
    printf ("Evaluatine SQUARE(x+2): ");
    PR(SQUARE(x+2)); // x+2*x+2    4+2*4+2  4+8+2 = 14
    printf ("Evaluatine 100/SQUARE(x): ");
    PR(100/SQUARE(x)); // 100/2*2  50*2 = 100
    printf ("Evaluatine SQUARE(++x): ");
    PR(SQUARE(++x)); // ++x*++x 5*6 = 30  但有的编译器会 6*6 = 36
    printf ("After incrementing, x is %x.\n", x);
    return 0;
}
