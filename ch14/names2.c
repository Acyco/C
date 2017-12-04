/* name2.c -- 传递和返回结构 p393 */
#include <stdio.h>
#include <string.h>

struct namect {
    char fname[20];
    char lname[20];
    int letters;
};

struct namect getinfo (void);
struct namect makeinfo (struct namect);
void showinfo (const struct namect);
char * mgets (char * str, int len);

int main (void)
{
    struct namect person;

    person = getinfo ();
    person = makeinfo (person);
    showinfo (person);
    return 0;
}
struct namect getinfo (void)
{
    struct namect temp;
    printf ("Please enter your first name.\n");
    mgets (temp.fname, 20);
    printf ("Please enter your last name.\n");
    mgets (temp.lname, 20);
    return temp;
}

struct namect  makeinfo (struct namect info)
{
    info.letters = strlen (info.fname) +
                  strlen (info.lname);
    return info;
}

void showinfo (const struct namect info)
{
    printf ("%s %s, your name contains %d letters.\n",
            info.fname, info.lname, info.letters);

}

char *mgets (char * str, int len)
{
    fgets (str, len, stdin);
    if(str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
}
