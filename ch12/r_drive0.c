/* r_drive0.c --测试rand0() 函数 p335 */ 
#include <stdio.h>

extern int rand0 (void);

int main (void)
{
    int count;
    for (count = 0; count < 5; count++)
        printf ("%d\n", rand0());
    return 0;
}
// gcc -o r_drive0 rand0.c r_drive0.c
