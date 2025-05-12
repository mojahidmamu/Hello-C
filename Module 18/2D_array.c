#include <stdio.h>
int main()
{
    // int array[row][column]; // initialize 2D array:
    int array[3][4];
    array[1][2] = 10;
    printf("%d", array[1][2]);
    return 0;
}
