#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    int divide2 = 0, divide3 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            divide2++;
        }
        else if (A[i] % 3 == 0)
        {
            divide3++;
        }
    }

    printf("%d %d\n", divide2, divide3);
    return 0;
}