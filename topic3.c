//다른 진수 표기법

/*
#include <stdio.h>

int main(void)
{
    printf("%d %#x %#o\n", 128, 128, 128);
    return 0;
}
*/

//lab: 달러를 원하로 계산하기

/*
#include <stdio.h>
#define EXCHANGE_RATE 1120

int main(void)
{
    int x;
    int y;

    printf("달러화 금액을 입력하시오: ");
    scanf("%d", &x);

    y=x*EXCHANGE_RATE;
    printf("달러화 %d달러는 %d원입니다.", x, y);

    return 0;
}
*/

//lab: 재산 계산하기

/*
#include <stdio.h>

int main(void)
{
    int property;
    int saving;

    printf("매달 저축 금액을 입력하시오: ");
    scanf("%d", &saving);

    property=saving*12*30;
    printf("30년 후의 재산 = %d원\n",property);
    return 0;
}
*/

//lab: 변수의 값 계산하기

/*
#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 200;
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}
*/

//lab: 태양빛 도달 시간

/*
#include <stdio.h>
int main(void)
{
    double v = 300000; // 빛의 속도
    double s = 149600000; // 태양과 지구 사이의 거리
    double t; // 걸린 시간

    t = s/v;
    t = t/60; // 초를 분으로 변환

    printf("빛의 속도는 %lfkm/s\n", v);
    printf("태양과 지구와의 거리 %lfkm\n", s);
    printf("도달 시간은 %lf초\n",t);

    return 0;
}
*/

//lab: 온도 변환하기

/*
#include <stdio.h>

int main(void)
{
    double x; //화씨 온도
    double y; //섭씨 온도
    
    printf("화씨온도= ");
    scanf("%lf", &x);

    y = (x-32.0)*5.0/9.0;
    printf("섭씨온도=%lf\n", y);

    return 0;
}
*/

//lab: 원의 면적 계산하기

/*
#include <stdio.h>

int main(void)
{
    double r; //반지름의 길이
    double s; //원의 면적

    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &r);

    s = r*r*3.141592;
    printf("원의 면적: %lf\n", s);

    return 0;
}
*/

//문자형 예제

/*
#include <stdio.h>

int main(void)
{
    char c;
    
    printf("문자를 입력하시오:");
    scanf("%c", &c);

    printf("입력된 문자는 %c입니다.\n",c);
    return 0;
}
*/

//제어문자 예제

/*
#include <stdio.h>

int main(void)
{
    int id, pass;

    printf("아이디와 패스워드를 4개의 숫자로 입력하세요:\n");

    printf("id: ____\b\b\b\b");
    scanf("%d", &id);

    printf("pass: ____\b\b\b\b");
    scanf("%d", &pass);
    printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.", id, pass);

    return 0;
}
*/
