#include <stdio.h>
int main()
{
    int a;
    scanf("%d\n", &a);
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    int b;
    scanf("%d\n", &b);
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    int arr3[a + b];
    for (int i = 0; i < a; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < b; i++)
    {
        arr3[i + a] = arr2[i];
    }

    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}