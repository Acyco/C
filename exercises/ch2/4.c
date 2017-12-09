#include <stdio.h>

void a (void);
void b (void);

int main (void)
{
    a ();
    b ();
    return 0;
}

void a (void)
{
    printf ("For he's a jolly good fellow!\n");
    printf ("For he's a jolly good fellow!\n");
    printf ("For he's a jolly good fellow!\n");
}

void b (void)
{
    printf ("Which noboy can deny!\n");
}
