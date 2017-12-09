#include <stdio.h>

int main (void)
{
    long year = 31560000;
    int age;
    printf ("Enter your age:");
    scanf ("%d", &age);
    printf ("%d years has %ld seconds\n", age, age * year);
    return 0;
}
