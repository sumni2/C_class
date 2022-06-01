#include <stdio.h>
#define NUM 9

void quickSort(int arr[], int L, int R)
{
    int left = L;
    int right = R;
    int pivot = arr[(L + R) / 2]; //pivot 가운데 설정
    int temp;
    while (left <= right) // left가 right 보다 오른쪽에 있을 때까지 반복
    {
        while (arr[left] < pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left <= right) //교환
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    if (L < right)
        quickSort(arr, L, right); //반복
    if (left < R)
        quickSort(arr, left, R); //반복
}

int main(void)
{
    int i;
    int arr[NUM] = {5,1,6,3,9,4,8,2,7};
    printf("정렬 전: ");
    for(i=0; i<NUM; i++)
    {
        printf("%d", arr[i]);
    }

    quickSort(arr, 0, NUM-1);
    
    printf("\n정렬 후: ");
    for(i=0; i<NUM; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}