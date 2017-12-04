/* booksave.c -- 把结构内容保存到文件中 p383 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if((pbooks = fopen ("book.bat", "a+b")) == NULL)
    {
        fputs ("Can't open book.dat file\n", stderr);
        exit (1);
    }
    rewind (pbooks);
    while (count < MAXBKS && fread (&libary[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts ("Current contents of book.dat");
        printf ("%s by %s: $%.2f\n", libary[count].title, 
                libary[count].author, libary[count].value);
        count++;
    }
    filecount = count;
    if(count == MAXBKS)
    {
        fputs ("The book.dat file is full.\n", stderr);
        exit (2);
    }
    printf ("Please add new book title.\n");
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
        fwrite (&libary[filecount], size, count - filecount, pbooks);
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
