#include <stdio.h>

#define DOLLER '$'

int main (void)
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
      for (j = 0; j < i; j++)
            printf ("%c", DOLLER);
      printf ("\n");
    }
        return 0;
}
