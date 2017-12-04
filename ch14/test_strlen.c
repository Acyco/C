#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mmm {
    char * a1;
    char * a2;
    int l;
};

char * mgets (char * str, int len);
void make (struct mmm *);

int main (void)
{
    char t1[81];
    char t2[81];
    struct mmm pp;
    struct mmm *p = &pp;
    p->a2 = "xx";

    mgets (t1, 81);
    p->a1 = (char *) malloc (strlen (t1) +1);
    strcpy (p->a1, t1);
    mgets (t2, 81);
    p->a2 = (char *) malloc (strlen (t2) +1);
    strcpy (p->a2, t2);
    int c = strlen (t1) + strlen (t2);
    printf ("c :%d\n", c);
    int d = strlen(t1) +
            strlen(t2);
    printf ("d : %d\n", d);
    printf ("  %d\n", strlen(t1) +
            strlen(t2));

    printf ("p->l:%d \n" , p->l = strlen (p->a1) + strlen (p->a2));
    make (&pp);
    printf ("make() p->l:%d \n" , p->l);
    return 0;
}

char * mgets (char * str, int len)
{
    fgets (str, len, stdin);
    if(str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
}
void make (struct mmm * p)
{
    p->l = strlen (p->a1) +
        strlen (p->a2);
}
