#include <stdio.h>

#define CM_TO_IN 2.54
#define IN_TO_FT 12

int main (void)
{
    float cm;
    int ft;
    float in;
    printf ("Enter a height in centimeters: ");
    while (scanf ("%f", &cm) && cm > 0)
    {
        in = cm / CM_TO_IN;
        ft = in / IN_TO_FT;
        in = in - (ft * IN_TO_FT);
        printf ("%.1f cm = %d feet, %.1f inches\n", cm, ft, in);
        printf ("Enter a height in centimeters (<=0 to quit): ");
    }
    printf ("Bye!\n");
    return 0;
}
