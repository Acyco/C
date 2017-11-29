/* mod_str.c -- 修改一个字符串 p311 */
#include <stdio.h>
#include "mygets.h"
#include <ctype.h>

#define LIMIT 80

void ToUpper (char *);
int punctCount (const char *);

int main (void)
{
    char line[LIMIT];

    puts ("Please enter a line: ");
    mygets (line);
    ToUpper (line);
    puts (line);
    printf ("That line has %d punctuation characters.\n",
            punctCount (line));

    return 0;
}

void ToUpper ( char * str )
{
    while (*str)
    {
        *str = toupper (*str);
        str++;
    }
}

int punctCount (const char * str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct (*str))
            ct++;
        str++;
    }
    return ct;
}
