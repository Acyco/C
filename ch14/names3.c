/* name3.c -- 使用指针和malloc()函数 p396 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect {
    char * fname;
    char * lname;
    int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);
void cleanup (struct namect *);
char * mgets (char * str, int len);

int main (void)
{
    struct namect person;

    getinfo (&person);
    makeinfo (&person);
    showinfo (&person);
    cleanup (&person);
    return 0;
}
void getinfo (struct namect * pst)
{
    char temp[81];
    printf ("Please enter your first name.\n");
    mgets (temp, 81);
    pst->fname = (char *)malloc (strlen (temp) + 1);
    strcpy(pst->fname, temp);
    printf ("Please enter your last name.\n");
    mgets (temp, 81);
    pst->lname = (char *)malloc (strlen (temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo (struct namect * pst)
{
    pst->letters = strlen (pst->fname) + 
                   strlen (pst->lname);
}

void cleanup (struct namect * pts)
{
    free(pts->fname);
    free(pts->lname);
}
void showinfo (const struct namect * pst)
{
    printf ("%s %s, your name contains %d letters.\n",
            pst->fname, pst->lname, pst->letters);

}

char *mgets (char * str, int len)
{
    fgets (str, len, stdin);
    if(str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
}
