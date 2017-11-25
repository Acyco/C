/* trouble.c -- 误用 p123 */
// 将导致无限的循环
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed. ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while ( status = 1 )   /* 误用 本应== 现在是= */
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): \n");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;   

}
