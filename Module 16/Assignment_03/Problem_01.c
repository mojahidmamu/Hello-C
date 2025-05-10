#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int space = N - 1;
    int star = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star; j++)
        {
            printf("#", j);
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}
