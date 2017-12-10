#include <stdio.h>

int main (void)
{
    int days;
    int w, d;
    
    printf ("enter a day: ");
    while (scanf ("%d", &days) && days >0)
    {
        printf ("%d days are %d weeks, %d days.\n", days, days / 7, days % 7);
        printf ("enter a day: ");
    }
    return 0;
}
