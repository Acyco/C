/* format.c -- 格式化一个字符串 p307 */
#include <stdio.h>
#include "mygets.h"// 引入mygets  代替书本上的gets

#define MAX 20

int main (void)
{
    char first[MAX];
    char last [MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts ("Enter your first name: ");
    mygets (first);
    puts ("Enter your last name: ");
    mygets (last);
    puts ("Enter your prize money: ");
    scanf ("%lf", &prize);
    sprintf (formal, "%s. %-19s: $%6.2f\n", last, first, prize);
    puts (formal);
    return 0;
}
