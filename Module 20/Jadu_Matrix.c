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

    int flag = 1;
    if (R == C)
    {
        //
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                
            }
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}