// 1.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int star =1;
    for (int i = n ; i >= 0; i--)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star+=2;
    }

    return 0;
}