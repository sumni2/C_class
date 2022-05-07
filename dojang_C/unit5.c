#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 10;
    num2 = 20;
    printf("%d, %d\n", num1, num2);
    num1 = num2;
    printf("%d", num1);

    return 0;
}