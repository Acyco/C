#include <stdio.h>

void cube (float i);
int main (void)
{
    float i;
    printf ("please enter float:");
    scanf ("%f", &i);
    cube(i);
    return 0;
}

void cube (float i)
{
    float c;
    c = i * i * i;
    printf ("%f\n", c);
}
