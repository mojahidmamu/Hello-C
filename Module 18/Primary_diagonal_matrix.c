#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int element = r * c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                        printf("Not Diagonal Matrix\n");
                    }
                }
            }
        }
    }
    else
    {
        printf("Not Diagonal Matrix'n");
    }

    return 0;
}