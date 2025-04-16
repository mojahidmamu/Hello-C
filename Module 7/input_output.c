#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        // printf("%d ", arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
         printf("%d ", arr[i]);
    }
    
    
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    // printf("%d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

    // arr[1] = 12;
    // printf("%d", arr[1]);
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    return 0;
}