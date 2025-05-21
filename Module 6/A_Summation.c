#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    int arr[testcase];

    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < testcase; i++)
    {
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}