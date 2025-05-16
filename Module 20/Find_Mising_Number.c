#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long long int M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);

        long long int sum = A * B * C;
        if (sum == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (M % sum != 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", M / sum);
        }
    }

    return 0;
}

//  Accepted