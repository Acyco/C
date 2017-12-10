#include <stdio.h>

#define MIN_TO_HOR 60

int main (void)
{
    int min;
    int hour, minute;

    printf ("enter a minutes:");
    while (scanf ("%d", &min) == 1 && min != 0)
    {
        hour = min / MIN_TO_HOR;
        minute = min % MIN_TO_HOR;
        printf ("%d minutes has %d hour and %d minutes\n", min, hour, minute);
        min = 0;
        printf ("enter a minutes:");
    }
    return 0;
}
