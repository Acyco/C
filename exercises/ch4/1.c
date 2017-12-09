#include <stdio.h>

#define SIZE 20

int main (void)
{
    char fname[SIZE],lname[SIZE];
    printf ("Enter last name:");
    scanf ("%s", lname);
    printf ("Enter first name:");
    scanf ("%s", fname);
    printf ("%s, %s\n", lname, fname);
    return 0;
}

