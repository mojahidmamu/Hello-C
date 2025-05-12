#include <stdio.h>
int main()
{
    int row, column ;
    scanf("%d %d", &row, &column);
    int array[row][column];
    // input from user:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d ", &array[i][j]);
        }
        printf("\n");
    }
    // print the array: 
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; i++)
        {
            printf("%d ", array[i][j]);
        }
        // printf("\n");
    }

    return 0;
}