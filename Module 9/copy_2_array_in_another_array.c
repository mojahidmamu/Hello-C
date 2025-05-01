#include <stdio.h>
// #include <string.h>
int main()
{
    // initialize & input the 1st array:
    int a;
    scanf("%d\n", &a);
    int arr1[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    // initialize & input the 2nd array:
    int b;
    scanf("%d\n", &b);
    int arr2[b];
    for (int i = 0; i < b; i++)
    {
        scanf("%d ", &arr1[i]);
    }

    // initialize & input & some activities the 3rd array:
    int arr3[a + b];
    // int len = strlen(arr3);
    for (int i = 0; i < a; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < b; i++)
    {
        arr3[i + a] = arr2[i];
    }

    // print the 3rd array:
    for (int i = 0; i < a + b; i++) // len or a+b hobe...
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}