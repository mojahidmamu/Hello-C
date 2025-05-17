#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int jadu = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);

            if (i == j || i + j = n - 1)
            {
                if (arr[i][j] != 1)
                {
                    jadu = 0;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    jadu = 0;
                }
            }
        }
    }

    if (jadu)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}