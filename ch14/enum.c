/* enum.c -- 使用枚举值 p409 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow",
    "green", "blue", "violet"};

#define LEN 10

char * mgets (char *str, int len)
{
    fgets (str, len, stdin);
    if (str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
    return str;
}


int main (void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts ("Enter a color (empty line to quit):");
    while (mgets(choice, LEN) != NULL && choice[0] != '\0')
    {
        for (color = red; color <= violet; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                color_is_found = true;
                break;
            }
        }
        if (color_is_found)
            switch (color)
            {
                case red    : puts ("Roses is red.");
                              break;
                case orange : puts ("Poppies is orange.");
                              break;
                case yellow : puts ("Sunflowers is yellow.");
                              break;
                case green  : puts ("Gress is green.");
                              break;
                case blue   : puts ("Bluebells are blue.");
                              break;
                case violet : puts ("Violets are violets.");
                              break;
            }
        else
            printf ("I don't know about the color %s.\n", choice);
        color_is_found = false;;
        puts ("Next color (empty line to quit):");
    }
    puts ("GoodBye!!");
    return 0;
}

