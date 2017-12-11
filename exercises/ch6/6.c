#include <stdio.h>
#include <string.h>

int main (void)
{
    char l[] = "hello world!";
    int i;
    for (i = strlen (l); i >=0; i--)
        printf ("%c", l[i]);
    printf ("\n");
    return 0;
}
