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

    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (element == count)
    {
        printf("Zero or Null Matrix\n");
    }
    else{
         printf("Not Zero or Null Matrix\n");
    }
    
    return 0;
}