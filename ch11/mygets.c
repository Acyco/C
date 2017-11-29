/* mygets.c -- 通过fgets()函数 弄成个类似gets */  
#include <stdio.h>
#include <string.h>
#include "mygets.h"


char *mygets(char *str)
{
    fgets (str, C_MAX, stdin);
    if(str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';   // 去掉换行符
}


/* int main (void) */
/* { */
/*     char str[20]; */
/*     printf ("Enter a string :"); */
/*     mygets (str); */
/*     printf ("%s", str); */
/*     printf ("\n"); */
/*     return 0; */

/* } */
