#include <stdio.h>

#define jia_to_shen 3.785
#define yl_to_gl 1.609

int main (void)
{
    float yl, jl, jlyl;
    float gl, s;
    printf ("yl and jl\n");
    scanf ("%f%f", &yl, &jl);
    jlyl = jl / yl;
    printf ("%.1f\n", jlyl);
    gl = yl * yl_to_gl;
    s = jl * jia_to_shen;

    printf ("%.1f\n", (s/gl) * 100);

    return 0;
}
