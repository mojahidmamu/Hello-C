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
    
    if (R == C)
    {
        
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}