#include <stdio.h>
int max_and_min(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", ar[i]);
    }
    int max = ar[0], min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            printf("%d", max = ar[i]);
        }
        if (min > ar[i])
        {
            printf("%d", min = ar[i]);
        }
    }
    // printf("%d %d", min, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    max_and_min(ar, n);

    return 0;
}