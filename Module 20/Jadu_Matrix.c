#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);

    int arr[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;
    if (R != C)
    {
        printf("NO\n"); // not squae..
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == j || i + j == R - 1)
            {
                if (arr[i][j] = 0)
                {
                    flag = 1;
                    break;
                }
            }
            else if (arr[i][j] == 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}