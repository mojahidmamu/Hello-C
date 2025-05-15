#include <stdio.h>
int max(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    max(arr, n - 1);
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = max(arr, n);
    printf("%d", result);
    return 0;
}