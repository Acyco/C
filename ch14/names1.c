/* name1.c -- 使用指向结构的指针 p392 */
#include <stdio.h>
#include <string.h>

struct namect {
    char fname[20];
    char lname[20];
    int letters;
};

void getinfo (struct namect *);
void makeinfo (struct namect *);
void showinfo (const struct namect *);
char * mgets (char * str, int len);

int main (void)
{
    struct namect person;

    getinfo (&person);
    makeinfo (&person);
    showinfo (&person);
    return 0;
}
void getinfo (struct namect * pst)
{
    printf ("Please enter your first name.\n");
    mgets (pst->fname, 20);
    printf ("Please enter your last name.\n");
    mgets (pst->lname, 20);
}

void makeinfo (struct namect * pst)
{
    pst->letters = strlen (pst->fname)+strlen (pst->lname);
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
