#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowest = arr[0];
    int minIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (lowest > arr[i])
        {
            lowest = arr[i];
            minIndex = i + 1;
        }
    }
    printf("%d %d", lowest, minIndex);
    return 0;
}