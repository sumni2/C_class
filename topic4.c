//수식과 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x, y, z;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    z = x + y;
    printf("%d + %d = %d\n", x, y, z);

    z = x - y;
    printf("%d - %d = %d\n", x, y, z);

    z = x * y;
    printf("%d * %d = %d\n", x, y, z);

    z = x / y;
    printf("%d / %d = %d\n", x, y, z);

    z = x % y;
    printf("%d %% %d = %d\n", x, y, z);

    return 0;
}
*/

//나눗셈 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    double x, y, z;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    z = x + y;
    printf("%lf + %lf = %lf\n",x, y, z);

    z = x - y;
    printf("%lf - %lf = %lf\n", x, y, z);

    z = x * y;
    printf("%lf * %lf = %lf\n", x, y, z);

    z = x / y;
    printf("%lf / %lf = %lf\n", x, y, z);

    return 0;
}
*/

//나머지 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int time, min, sec;

    printf("초단위의 시간을 입력하시오: (32억 초 이하) ");
    scanf("%d", &time);

    min = time/60;
    sec = time%60;
    printf("%d초는 %d분 %d초 입니다.\n",time, min, sec);

    return 0;
}
*/

//증감 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x, y;

    x = 1;
    y = ++x;
    printf("x = %d y = %d\n", x, y);

    y = x++;
    printf("x = %d y = %d\n", x, y);

    return 0;
}
*/

//lab:최대로 살 수 있는 사탕의 개수 계산하기

/*
#include <stdio.h>

int main(void)
{
    int money, price, candy, change;

    printf("현재 가지고 있는 돈: %d\n",money);
    scanf("%d", &money);

    printf("캔디의 가격: %d\n", price);
    scanf("%d", &price);

    candy = money/prize;
    printf("최대로 살 수 있는 캔디의 개수= %d\n", candy);

    change = money%prize;
    printf("캔디 구입 후 남은 돈= %d\n", change);

    return 0;
}
*/

//lab: 자동 판매기 프로그램

/*
#include <stdio.h>

int main(void)
{
    int money, price, change;

    printf("투입한 돈: ");
    scanf("%d", &money);

    printf("물건값: ");
    scanf("%d", &price);

    change = money - price;
    printf("거스름돈: %d\n", change);

    int n_100 = change/100;
    printf("100원의 동전의 개수: %d\n", n_100);

    int n_10 = (change%100)/10;
    printf("10원의 동전의 개수: %d", n_10);

    return 0;
}
*/

//복합 대입 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x= 10, y= 10;
    printf("x= %d y= %d\n", x, y);

    x += 1;
    printf("(x += 1)이후 x= %d\n", x);

    y *= 2;
    printf("(y *= 2)이후 y= %d\n", y);

    return 0;
}
*/

//관계 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("x==y의 결과값: %d\n", x==y);
    printf("x!=y의 결과값: %d\n", x!=y);
    printf("x>y의 결과값: %d\n", x>y);
    printf("x<y의 결과값: %d\n", x<y);
    printf("x>=y의 결과값: %d\n", x>=y);
    printf("x<=y의 결과값: %d\n", x<=y);

    return 0;
}
*/
