/* strings.c -- 使用字符串与用户交互 p282 */
#include <stdio.h>

// 一个符号字符串常量
#define MSG "You must have many talents. Tell me some. "
#define LIM 5
#define LINELEN 81  // 最大字符串长度+1

int main (void)
{
    char name[LINELEN];
    char talents[LINELEN];
    int i;
    const char m1[41] = "Just limit yourself to one line's worth.";
                                // 初始化一个大小已确定的char数组
    const char m2[] = "If you can't think of anything, fake it.";
                                // 让编译器计算数组大小
    const char *m3 = "\nEnough about me - what's your name? ";
                                // 初始化一个指针
    const char *mytal[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stshing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
                                // 初始化一个字符串指针的数组

    printf ("Hi, I'm Clyde the Computer." " I have many talents\n");

    printf ("Let me tell you some of them.\n");
    for (i = 0; i < LIM; i++)
        puts (mytal[i]);         // 打印计算机功能列表 
    puts (m3);
   // gets (name);     // 书本是用这个 但linux的gcc编译不通过 禁用 换下面
    fgets (name, LINELEN,stdin);
    printf ("Well, %s, %s\n", name, MSG);
    printf ("%s\n%s\n", m1, m2);
    //gets (talents);
    fgets (talents, LINELEN,stdin);
    puts ("Let's see if I've got that list: ");
    puts (talents);
    printf ("Thanks for the information, %s.\n", name);
    return 0;
}
