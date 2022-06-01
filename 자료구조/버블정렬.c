#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int temp;

    for (int i = 0; i <= 10; i++ )
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[j] > a [j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }   
}
int main(void)
{
    int a[10] = {8, 4, 2, 5, 3, 7, 10, 1, 6, 9};

    bubbleSort(a, sizeof(a)/sizeof(int));
    for (int i = 0; i <10; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}