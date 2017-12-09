#include <stdio.h>
#include <string.h>

#define SIZE 20

int main (void)
{
    char name[SIZE];

    printf ("Enter a name:");
    scanf ("%s", name);
    printf ("\"%s\"\n", name);
    printf ("\"%20s\"\n", name);
    printf ("\"%-20s\"\n", name);
    printf ("%*s\n",strlen (name) + 3, name);
    
    return 0;
}
