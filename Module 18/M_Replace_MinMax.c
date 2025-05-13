#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minIndex = 0, maxIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex]) // find minIndex
        {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) // find maxIn0{
        {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
