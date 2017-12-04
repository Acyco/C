/* funds1.c -- 把结构成员作为参数传递 p389 */
#include <stdio.h>

#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bandfund;
    char save[FUNDLEN];
    double savefund;
};


double sum (double, double);

int main (void)
{
    struct funds stan = {
        "Garlic-Melon Bank",
        3024.72,
        "Lucky's Savings and Loan",
        9237.11
    };
    printf ("Stan has a total of $%.2f.\n", 
            sum(stan.bandfund, stan.savefund));
   return 0;
}


double sum (double x, double y)
{
    return (x+y);
}
