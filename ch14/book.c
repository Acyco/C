/* book.c -- 仅包含一本书的图书目录 p378 */
#include <stdio.h>
#include <string.h>

#define MAXTITL 41
#define MAXAUTL 31

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};


int main (void)
{
    struct book libary;
    printf ("Please enter the book title.\n");
    fgets (libary.title,MAXTITL,stdin);
    libary.title[strlen (libary.title) -1 ] = '\0';
    printf ("Now enter the book anthor.\n");
    fgets (libary.author,MAXTITL,stdin);
    libary.author[strlen (libary.author) -1 ] = '\0';
    printf ("Now enter the value.\n");
    scanf ("%f",&libary.value);
    printf ("%s by %s %.2f\n", libary.title, libary.author, libary.value);
    printf ("%s: \"%s\" (%.2f) \n",libary.author, libary.title, libary.value);
    printf ("Done!\n");

    return 0;
}

