//6.编写一个能够产生下列输出的程序
//Smile!Smile!Smile!
//Smile!Smile!
//Smile!
//在程序中定义一个能显示字符串Smile!一次的函数，并在需要的时使用该函数
#include <stdio.h>

void s (void);
int main (void)
{
    s ();
    s ();
    s ();
    printf ("\n");
    s ();
    s ();
    printf ("\n");
    s ();
    printf ("\n");
    return 0;
}

void s (void)
{
    printf ("Smile!");
}
