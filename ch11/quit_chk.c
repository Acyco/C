/* quit_chk.c -- 某程序的开始 p302 */
#include <stdio.h>
#include <string.h>
#include "mygets.h"  //调用mygets();
#define SIZE  8
#define LIM  100
#define STOP  "quit"

int main (void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf ("Enter up to %d lines (type quit to quit)",LIM);
    while (ct < LIM && mygets (input[ct]) != NULL &&
           strcmp (input[ct], STOP) != 0)
    {
        ct++;
    }
    printf ("%d strings entered\n", ct);

    return 0;
}

