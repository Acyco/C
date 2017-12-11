#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '

int main (void)
{
    char letter;
    int i, j;

    printf ("Enter a uppercase letter:");
    scanf ("%c", &letter);
    if(letter < 65 || letter >90)
    {
        printf ("Please enter uppercase letters!!\n ");
        exit (1);
    }
 
    for (i = 'A'; i <= letter; i++ )
    {
        for (j = (letter - i);j > 0; j--)
             printf ("%c", SPACE); 
        for (j = 'A'; j <= i; j++)
            printf ("%c", j);
        for (j = j - 2; j >= 'A'; j--)
            printf ("%c", j);
        printf ("\n"); 
    }

    
    return 0;
}
