#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int a, b, sum = 0;
        scanf("%lld %lld", &a, &b);

        for (long long int i = a; i <= b; i++)
        {
            sum += i;
        }
        printf("%lld\n", sum);
    }

    return 0;
}