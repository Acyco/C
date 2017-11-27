/* loccheck.c -- 查看变量的存储地址 p234 */
#include <stdio.h>

void mikdo (int); //声明函数

int main (void)
{
    int pooh = 2, bad = 5; //main()函数中的局部变量

    printf ("In main (), pooh = %d and &pooh = %p\n",
            pooh, &pooh);
    printf ("In main (), bad = %d and &bad = %p\n",
            bad, &bad);
    mikdo (pooh);
    return 0;
}

void mikdo (int bad)   //定义函数
{
    int pooh = 10;      // mikdo()函数中的局部变量

    printf ("In mikdo (), pooh = %d and &pooh = %p\n",
            pooh, &pooh);
    printf ("In mikdo (), bad = %d and &bad = %p\n",
            bad, &bad);


}

