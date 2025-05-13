#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int lowest = arr[1], index = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            index = i;
            break;
        }
    }
    printf("%d %d", lowest, index);

    return 0;
}