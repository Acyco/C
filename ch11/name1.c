/* name1.c -- 读取一个名字 */
#include <stdio.h>
#define MAX 81

int main (void)
{
    char name[MAX];    // 分配空间
    printf ("Hi, what's your name?\n");
    gets(name); // 把字符串送进数组中  在linux的gcc是编译不过的
                // gets (); 一个不足是它不检查预留存储区是否容纳实际输入字符，
                // 多出来的字符简单的溢出到相邻的内存区，这是很危险的，
                // 这个例子就不进行编译了,其实也就和getchar()类似 都差不多
    printf ("Nice name: %s\n", name);
    return 0;
}
