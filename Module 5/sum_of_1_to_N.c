#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int sum = N * (N + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}