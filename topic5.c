//비트 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x = 9;
    int y = 10;

    printf("비트 AND = %08X", x & y); // %X(16진수, 대문자)에서 변형된 것으로 8자리 수에 맞춰서 쓸 떄 부족한 부분이 있을 시 0으로 채우라는 뜻
    printf("비트 OR = %08X", x | y);
    printf("비트 XOR = %08X", x ^ y);
    printf(" 비트 NOT = %08X", ~x);

    return 0;
}
*/

//비트 이동 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int x = 9;

    printf("%d << 1 = %d\n", x, x<<1);
    printf("%d >> 1 = %d\n", x, x>>1);

    return 0;
}
*/

//계산 우선 순위 예제

/*
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 3;
    int result;

    result = a + b * c / d;
    printf("연산값: %d\n", result);

    result = (a + b) * c / d;
    printf("연산값: %d\n", result);

    result = a = b = 1;
    printf("연산값: %d\n", result);

    return 0;
}
*/

//형변환 예시

/*
#include <stdio.h>

int main(void)
{
    int i;
    double f;

    f = 5 /4;
    printf("(5 / 4) = %f\n", f);

    f = (double)5 / 4;
    printf("(double)5 / 4 = %f\n", f);

    i = 1.3 + 1.8;
    printf("1.3 + 1.8 = %d\n", i);

    i = (int)1.3 + (int)1.8;
    printf("(int)1.3 + (int)1.8 = %d\n", i);

    return 0;
}
*/

//lab: 2차 함수 계산

/*
#include <stdio.h>

int main(void)
{
    double x = 2;
    double y;

    y = 3.0*x*x + 7.0*x +9.0;
    printf("y = 3.0*x*x + 7.0*x +9.0 = %f\n", y);

    return 0;
}
*/

//lab: 복리 계산

/*
#include <stdio.h>
#include <math.h>

int main(void)
{
    int init_money = 24; //초기 넣은 돈
    double interest = 0.06; //복리
    int years = 382; //기간

    double money = init_money*pow((1.0+ interest),years);

    printf("%d년 후의 원리금 = %f\n", years, money);
    return 0;
}
*/

 //if-else 예제

/*
 #include <stdio.h>

 int main(void)
 {
     int score;
     scanf("%d", &score);
     if(score >= 60){
         printf("합격입니다.\n");
     }
     else{
         printf("불합격입니다.\n");
     }

     return 0;
 }
 */

//예제2

/*
#include <stdio.h>

int main(void)
{
    int temperature;
    
    printf("온도를 입력하시오:");
    scanf("%d", &temperature);

    if(temperature > 0){
        printf("영상의 날씨입니다.\n");
    }
    else{
        printf("영하의 날씨입니다.\n");
    }
    
    printf("현재 온도는 %d도 입니다.\n", temperature);
    return 0;
}
*/

//예제3

/*
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("정수를 입력하시오:");
    scanf("%d", &x);

    y = x % 2;
    if(y == 0){
        printf("입력된 정수는 짝수입니다.");
    }
    else{
        printf("입력된 정수는 홀수입니다.");
    }

    return 0;
}
*/

//예제4

/*
#include <stdio.h>

int main(void)
{
    int score;

    printf("성적을 입력하시오:");
    scanf("%d", &score);

    if(score >= 60){
        printf("합격입니다.\n");
        printf("장학금도 받을 수 있습니다.\n");
    }

    return 0;
}
*/

 //조건연산자 예제

/*
 #include <stdio.h>

 int main(void)
 {
    int x, y;

    printf("첫 번째 수=");
    scanf("%d", &x);

    printf("두 번째 수=");
    scanf("%d", &y);

    printf("큰 수= %d\n", (x > y) ? x : y);
    printf("작은 수= %d\n", (x < y) ? x : y);

    return 0;
 }
 */

//논리 연산자 예제

/*
#include <stdio.h>

int main(void)
{
    int number;

    printf("정수를 입력하시오:");
    scanf("%d", &number);

    if (number >= 0 && number <= 100){
        printf("입력한 정수가 0에서 100사이에 있습니다.\n");    
    }
    else{
        printf("입력한 정수가 0에서 100 사이가 아닙니다.\n");
    }

    return 0;
}
*/

//lab: 윤년 판단하기

/*
#include <stdio.h>

int main(void)
{
    int year;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("%d년은 윤년입니다.\n",  year);
    }
    else{
        printf("%d년은 윤년이 아닙니다.\n", year);
    }

    return 0;
}
*/

//lab: 동전 던지기 게임

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    printf("동전 던지기 게임을 시작합니다.\n");
    
    srand((unsigned)time(NULL));

    int coin = rand() % 2;
    
    if (coin == 0){
        printf("앞면입니다.\n");
    }
    else{
        printf("뒷면입니다.\n");
    }

    return 0;
}
*/

//간단한 산술 계산기 프로그램

/*
#include <stdio.h>

int main(void)
{
    char op;
    int x, y;

    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+'){
        printf("%d\n", x+y);
    }
    else if(op == '-'){
        printf("%d\n", x-y);
    }
    else if(op == '*'){
        printf("%d\n", x*y);
    }
    else if(op == '/'){
        printf("%d\n", x/y);
    }
    else{
        printf("지원되지 않는 연산자입니다.\n");
    }

    return 0;
}
*/

//lab: 세 개의 정수 중에서 큰 수 찾기

/*
 #include <stdio.h>

 int main(void)
 {
     int x, y, z;

     printf("세 개의 정수를 입력하시오: ");
     scanf("%d %d %d", &x, &y, &z);

     if(x>y && x>z){
         printf("가장 큰 정수는 %d이다.\n", x);
     }
     else if(y>x && y>z){
         printf("가장 큰 정수는 %d이다.\n", y);
     }
     else{
         printf("가장 큰 정수는 %d이다.\n", z);
     }

     return 0;
 }
 */

//달이 주어지면 그 달의 일수를 출력하는 프로그램

/*
#include <stdio.h>

int main(void)
{
    int month, days;

    printf("일수를 알고 싶은 달을 입력하시오:" );
    scanf("%d", &month);

    switch (month)
    {
    case 2:
        days = 28;
        break;
    
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    
    default:
        days = 31;
        break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);
    return 0;
}
*/

//lab: 가위, 바위, 보 게임

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int user, computer;

    printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n");
    printf("하나를 선택하세요(가위-0, 바위-1, 보-2):");
    scanf("%d", &user);

    srand((unsigned)time(NULL));

    computer = rand() % 3;

    printf("사용자=%d", user);
    printf("컴퓨터=%d", computer);

    if ((user + 1) % 3 == computer){
        printf("컴퓨터 승리\n");
    }
    else if(computer == user){
        printf("비겼음\n");
    }
    else{
        printf("사용자 승리\n");
    }

    return 0;
}
*/