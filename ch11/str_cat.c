/* str_cat.c -- 连接两个字符串 p298 */
#include <stdio.h>
#include <string.h> //声明strcat()函数

#define SIZE 80

int main (void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes";

    puts ("What is your favorite flower?");
    fgets(flower, SIZE, stdin );  // gets(flower);  书上是这样。。。。用不了
    // gets (flower);
    strcat (flower, addon);
    puts (flower);
    puts (addon);
    return 0;
}
