/* strcnvt.c -- 尝试使用strtol()函数 p315 */
#include <stdio.h>
#include <stdlib.h>
#include "mygets.h"

int main ()
{
    char number[30];
    char *end;
    char value;

    puts ("Enter a number (empty line to quit):");
    while (mygets (number) && number[0] != '\0') 
    {
        value = strtol (number, &end, 10);
        printf ("value:%ld stopend at %s(%d) \n",
                value, end , *end);
        value = strtol (number, &end, 16);
        printf ("value:%ld stopend at %s(%d) \n",
                value, end , *end);
        puts ("Nxet numeber: ");

   }
    puts ("Bye!\n");
    return 0;
}
