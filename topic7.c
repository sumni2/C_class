//포인터 예제

/*
#include <stdio.h>

int main(void){
    int number = 10;
    int *p;

    p = &number;
    printf("변수 number의 값 = %d\n", number);

    *p = 20;
    printf("변수 number의 값 = %d\n", number);

    return 0;
}
*/ 

//포인터 증가 연산 예제
/*
#include <stdio.h>
int main(void){
    char *pc;
    int *pi;
    double *pd;

    pc = (char*)10000;
    pi = (int*)10000;
    pd = (double*)10000;
    
    pc++;
    pi++;
    pd++;

    printf("pc + 2 = %d. pi + 2 = %d, pd + 2 = %d\n", pc+2, pi+2, pd+2);
}
*/


#include <stdio.h>

double sum_product(sum, product){
    double x, y, sum, product;
    sum = x + y;
    product = x * y;
    return sum, product;
}
int main(void){
    double x, y, sum, product;
    x = 2.718;
    y = 3.142;
    sum = sum_product(&sum);
    product = sum_product(&product);
    printf("%lf %lf", sum, product);
    return 0;
}