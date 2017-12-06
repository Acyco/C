/* predef.c -- 预定义标识符 p463 */
#include <stdio.h>
void who_me (void);

int main(void)
{
    printf ("The file is %s.\n",  __FILE__);
    printf ("The date is %s.\n",  __DATE__);
    printf ("The time is %s.\n",  __TIME__);
    printf ("The version is %ld.\n",  __STDC_VERSION__);
    printf ("This is line %d.\n",  __LINE__);
    printf ("The Function is %s.\n",  __func__);
    who_me ();
    return 0;
}

void who_me(void)
{
    printf ("The Function is %s.\n",  __func__);
    printf ("This is line %d.\n",  __LINE__);

}

