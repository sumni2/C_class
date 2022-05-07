// while 반복문

// 마일을 미터로 변환하기

/*
#include <stdio.h>

int main(void)
{
    int meter;
    int i = 0;

    while(i<3){
        meter = i*1609;
        printf("%d 마일을 %d 미터입니다.\n", i, meter);
        i++;
    }
    return 0;
}
*/

//팩토리얼 계산하기

/*
#include <stdio.h>

int main(void)
{
    int i = 5;
    long factorial = 1;

    while(i >= 1){
        factorial *= i;
        i--;
    }
    printf("%d\n", factorial);

    return 0;
}
*/

// 1부터 n까지의 합
/*
#include <stdio.h>

int main(void){
    int i, n, sum;

    i = 1;
    sum = 0;
    scanf("%d", &n);

    while(i <= n){
        sum += i;
        i++;
    }
    printf("합은 %d입니다.", sum);
    return 0;
}
*/

//lab: 최대 공약수 찾기

/*
#include <stdio.h>
int main(void)
{
    int x, y, r;

    printf("두 개의 정수를 입력하시오(큰수, 작은수):");
    scanf("%d%d", &x, &y);

    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    printf("최대공약수는 %d입니다.", x);
    return 0;
}
*/

//lab: 숫자 추측 게임

/*
#include <stdio.h>
int main(void){
    int answer = 59;
    int guess;
    int tries = 0;
    do{
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;
        if(guess>answer)
            printf("제시한 점수가 높습니다.");
        if(guess<answer)
            printf("제시한 점수가 낮습니다.");
    }while (guess != answer);
    printf("축하합니다. 시도횟수=%d",tries);
    return 0;
}
*/

//팩토리얼 계산하기

/*
#include <stdio.h>
int main(void){
    long fact = 1;
    int i, n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        fact = fact * i;
    
    printf("%d!은 %d입니다.\n", n, fact);

    return 0;
}
*/

//예제

/*
#include <stdio.h>
int main(void){
    int i;
    double number, sum = 0.0;

    for(i = 1; i <= 10; i++){
        printf("%d번째 실수를 입력하시오: ", i);
        scanf("lf", &number);

        if(number < 0.0)
            break;
        
        sum += number;
    }
    printf("합계 = %f", sum);
    return 0;
}
*/

//lab: 산수 문제 자동출제

/*
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int i, ans;
    printf("산수 문제를 자동으로 출제합니다.\n");

    while (1)
    {
        int x = rand()%100;
        int y = rand()%100;
        printf("%d + %d =", x, y);
        scanf("%d", &ans);

        if(x + y == ans){
            printf("맞았습니다.\n");
            break;
        }
        else
            printf("틀렸습니다.\n");
    }
    return 0;    
}
*/

//문자형 배열

/*
#include <stdio.h>
#define SIZE 26

int main(void){
    int i;
    char codes[SIZE];

    for(i = 0; i < SIZE; i++)
        codes[i] = 'a' + i;
    
    for(i = 0; i < SIZE; i++)
        printf("%c", codes[i]);
    printf("\n");

    return 0;
}
*/

//lab: 배열에서 특정한 값 탐색하기

/*
#include <stdio.h>
#define SIZE 10

int main(void){
    int key, i;
    int list[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("[");
    for(i=0; i < SIZE; i++){
        printf("%d ", list[i]);
    }
    printf("]\n");
    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &key);

    for(i=0; i < SIZE; i++){
        if(list[i] == key){
            printf("탐색 성공 인덱스 = %d\n", i);
            break;
        }
    }
    return 0;
}
*/

//버블 정렬

/*
#include <stdio.h>
#define SIZE 5

int main(void){
    int i, k;
    int list[SIZE] = {16, 7, 9, 1, 3};

    for(k = 0; i < SIZE; k++){
        for(i = 0; i < SIZE - 1; i++){
            if(list[i] > list[i+1]){
                int tmp = list[i];
                list[i] = list[i+1];
                list[i+1] = tmp;
            }
        }
    }
    for(i = 0; i < SIZE; i++){
        printf("%d ", list[i]);
    }
    return 0;
}
*/

