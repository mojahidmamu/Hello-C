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
    
    int X, v;
    scanf("%d %d", &X, &v);


    arr[X] = v;

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}