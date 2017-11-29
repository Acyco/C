/* nogo.c -- 这个程序。。。。 p299 */
#include <stdio.h>
#include "mygets.h"

#define ANSWER "Grant"


int main (void)
{
    char try[40];

    puts ("Who is buried in Grant's tomb?");
    mygets (try);
    while (try != ANSWER)
    {
        puts ("No, that's wrong. Try again.");
        mygets (try);
    }
    puts ("That's right");
    return 0;
}
