#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int mul = factorial(n - 1);
    return n * mul;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = factorial(n);
    printf("%d", ans);
    return 0;
}