// 두  개의 숫자의 합을 계산하는 프로그램

/*
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int sum;

    x=100;
    y=200;

    sum=x+y;
    printf("두 수의 합=%d\n",sum);

    return 0;
}
*/

//사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력하기

/*
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    int sum;

    printf("첫 번째 숫자를 입력하시오.");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하시오.");
    scanf("%d", &y);

    sum = x+y;
    printf("두 수의 합: %d", sum);

    return 0;
}
*/

//lab: 여행 비용 계산

/*
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int e;
    int sum;

    printf("여행은 몇박인가요?: ");
    scanf("%d", &a);

    printf("항공권 가격: ");
    scanf("%d", &b);

    printf("호텔 1박 가격: ");
    scanf("%d", &c);

    printf("하루에 필요한 용돈: ");
    scanf("%d", &e);

    printf("====================");

    sum = b + (c + e) * a;
    
    printf("총 여행 비용: %d", sum);

    printf("====================");

    return 0;

}
*/

