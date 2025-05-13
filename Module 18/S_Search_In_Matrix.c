#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int num ;
    scanf("%d", &num);
    int found = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
             if (arr[i][j] == num)
             {
                found = 1;
                break;
             }
        }
    }
    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    

    return 0;
}