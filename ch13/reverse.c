/* reverse.c -- 反序显示一个文件 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CNTL_Z '\032'
#define SLEN 50

int main (void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, lest;

    puts ("Enter the name of the file to be processed:");
    fgets(file, SLEN, stdin);
    file[strlen (file) - 1] = '\0';
    if ((fp = fopen (file, "rb")) == NULL)
    {
        printf ("reverse can't open %s", file);
        exit (1);
    }
    fseek (fp, 0L, SEEK_END);
    lest = ftell (fp);
    for (count = 1L; count <= lest; count++)
    {
        fseek (fp, -count, SEEK_END);
        ch = getc (fp);
        if (ch != CNTL_Z && ch != '\r')
            putchar(ch);
        
    }
        putchar ('\n');
        fclose (fp);
        return 0;
}
