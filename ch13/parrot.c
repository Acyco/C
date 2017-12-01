/* parrot.c -- 使用 fgets fputs */   
#include <stdio.h>

#define MAXLEN 20

int main (void)
{
    char line[MAXLEN];

    while (fgets (line, MAXLEN, stdin) != NULL
           && line[0] != '\n')
        fputs (line, stdout);
    return 0;
}
