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
            scanf("%d ", &arr[i][j]);
        }
    }

    int last_row = R - 1;
    for (int j = 0; j < C; j++)
    {
        printf("%d ", arr[last_row][j]);
    }
    printf("\n");

    int last_col = C - 1;
    for (int i = 0; i < R; i++)
    {
        printf("%d ", arr[i][last_col]);
    }

    return 0;
}
// Accepted: 