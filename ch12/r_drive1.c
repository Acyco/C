/* r_drive1.c -- 测试rand1()和srand1()p336 */ 
//与 s_and_r.c 一起编译
#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1 (void);

int main (void)
{
    int count;
    unsigned seed;

    printf ("Please enter your choice for seed.\n");
    while (scanf ("%u", &seed) == 1)
    {
        srand1(seed);
        for (count = 0; count < 5; count++)
            printf ("%d\n", rand1());
        printf ("Please enter your choice for seed.\n");
    }
    return 0;
}
// gcc -o r_drive1 s_and_r.c r_drive1.c
