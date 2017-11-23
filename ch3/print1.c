/* print1.c --说明printf()的一些属性 p37 */
#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it worng: ");
    printf("%d minus %d is %d\n", ten);
    return 0;
}
