#include <stdio.h>
#include <string.h>

int main (void)
{
    char fname[41], lname[41];

    scanf ("%s", fname);
    scanf ("%s", lname);
    printf ("%s %s\n", fname, lname);
    printf ("%*d %*d\n", strlen (fname), strlen (fname),strlen (lname), strlen (lname));
    printf ("%s %s\n", fname, lname);
    printf ("%-*d %-*d\n", strlen (fname), strlen (fname),strlen (lname), strlen (lname));
    return 0;
}
