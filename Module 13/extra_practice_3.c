// 1.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = n ; i >= 0; i--)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        space++;
    }

    return 0;
}