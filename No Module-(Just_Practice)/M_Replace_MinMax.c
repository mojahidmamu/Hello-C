#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[min])
        {
            min = i;
        }
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }

    // swap
    int temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}