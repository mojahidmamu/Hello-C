#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int space = N - 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
        space--;
    }
    return 0;
}
// Accepted