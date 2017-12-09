#include <stdio.h>

#define SIZE 41

int main (void)
{
    char name[SIZE];
    float feet;

    printf ("please enter name \n");
    scanf ("%s", name);
    printf ("please enter tall\n");
    scanf ("%f", &feet);
    printf ("%s, you are %.3f feet tall\n", name, feet/10);
    return 0;
}

