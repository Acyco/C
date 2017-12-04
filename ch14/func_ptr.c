/* func_ptr.c  -- 使用函数指针 p415 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char showmenu (void);
void eatline (void);    // 读至行末
void show (void (* fp)(char *), char *str);
void ToUpper (char *);  // 把字符串转换为大写
void ToLower (char *);  // 把字符串转换为小写
void Tanspose (char *); // 大小写转置
void Dummy (char *);    // 不改变字符
char * mygets (char *str)
{
    fgets (str, 200, stdin);
    if(str[strlen (str) - 1] == '\n')
        str[strlen (str) - 1] = '\0';
    return str;
}

int main (void)
{
    char line[81];
    char copy[81];
    char choice;
    void (*pfun) (char *);  // 指向一个函数， 该函数
                            // 接受 一个 char * 参数
                            // 并且没有返回值

    puts ("Enter a string (empty line to quit):");
    while (mygets(line) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu ()) != 'n')
        {
            switch (choice)
            {
                case 'u':pfun = ToUpper;break;
                case 'l':pfun = ToLower;break;
                case 't':pfun = Tanspose;break;
                case 'o':pfun = Dummy;break;
            }
            strcpy (copy, line);
            show (pfun, copy);
        }
        puts ("Enter a string (empty line to quit):");
    }
    puts ("Bye!");
    return 0;
}

char showmenu (void)
{
    char ans;
    puts ("Eneter menu choice");
    puts ("u) uppercase     l) lowercase");
    puts ("t) transposed    o) original case");
    puts ("n) next string");
    ans = getchar (); // 获取用户响应
    ans = tolower(ans); // 替换为小写
    eatline ();
    while (strchr ("ulton", ans) == NULL)
    {
        puts ("Please enter a u, l, t, o, or n: ");
        ans = tolower (getchar ());
        eatline ();
    }
    return ans;
}

void eatline (void)
{
    while (getchar () !='\n')
        continue;
}

void ToUpper (char * str)
{
    while (*str)
    {
        *str = toupper (*str);
        str++;
    }
}

void ToLower (char * str)
{
    while (*str)
    {
        *str = tolower (*str);
        str++;
    }
}

void Tanspose (char * str)
{
    while (*str)
    {
        if (islower (*str))
            *str = toupper (*str);
        else if (isupper (*str))
            *str = tolower (*str);
        str++;
    }
}

void Dummy (char * str)
{
    // 不改变字符  啥都不干。。。。。。。。。
}

void show (void (* fp) (char *), char * str)
{
    (* fp)(str);// 把用户选择的函数作用于str
    puts (str); // 显示结果
}

