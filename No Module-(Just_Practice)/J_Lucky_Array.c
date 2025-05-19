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
    int min = arr[0];
    int minCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            minCount++;
        }
    }
    if (minCount % 2 != 0)
    {
        printf("Lucky\n");
    }
    else{
        printf("Unlucky\n");
    }
    

    return 0;
}