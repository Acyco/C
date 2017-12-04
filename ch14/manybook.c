/* manybook.c -- 包含多本书的图书目录 p383 */
#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 2

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

char * mgets (char *str, int len);
int main (void)
{
    struct book libary[MAXBKS];
    int count = 0;
    int index;

    printf ("Please enter the book title.\n");
    printf ("Press [enter] at the strat of a line to stop.\n");
    while (count < MAXBKS && 
    mgets (libary[count].title, MAXTITL) &&
     libary[count].title[0] != '\0')
    {
    printf ("Now enter the book anthor.\n");
    fgets (libary[count].author,MAXTITL,stdin);
    libary[count].author[strlen (libary[count].author) -1 ] = '\0';
    printf ("Now enter the value.\n");
    scanf ("%f",&libary[count++].value);
    while (getchar () != '\n')
        continue;
    if (count < MAXBKS)
        printf ("Enter the next title.\n");

    }
    if (count > 0)
    {
        printf ("Here is the list of your books.\n");
        for (index = 0 ; index < count; index++)
            printf ("%s by %s %.2f\n", libary[index].title,
                    libary[index].author, libary[index].value);
    }
    else
    printf ("no books, Too bad!\n");

    return 0;
}

char * mgets(char * str, int len)
{
    fgets (str, len, stdin);
    if (str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
}
