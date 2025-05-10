#include <stdio.h>
int max_and_min(int ar[], int n)
{
    int max = ar[0], min = ar[0];
    for (int i = 0; i < n; i++)
    {
        if ( ar[i] > max)
        {
            max = ar[i];
        }
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    printf("%d %d", min, max);
    
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", ar[i]);
    }

    max_and_min(ar, n);

    return 0;
}