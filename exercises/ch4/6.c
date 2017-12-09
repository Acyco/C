#include <stdio.h>
#include <float.h>


int main (void)
{
    double d = 1.0/3.0;
    float f = 1.0/3.0;
    printf ("FLT_DIG:%d, DBL_DIG:%d\n", FLT_DIG, DBL_DIG);
    printf ("%.4f %.12f %.16f\n", f, f, f);
    printf ("%.4f %.12f %.16f\n", d, d, d);
    return 0;
}
