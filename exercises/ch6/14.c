#include <stdio.h>
#include <string.h>

int main (void)
{
    char l[255];
    int i;
    scanf ("%s", l);
    for (i = strlen (l) - 1; i >=0; i-- )
        printf ("%c", l[i]);
    printf ("\n");
    return 0;
}
