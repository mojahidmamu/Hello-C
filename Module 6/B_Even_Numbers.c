#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 1)
    {
        printf("-1");
    }
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
// printf("Even: %d\n", even);
    // printf("Odd: %d\n", odd);
    // printf("Positive: %d\n", pos);
    // printf("Negative: %d\n", neg);