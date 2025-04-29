#include <stdio.h>
int main()
{
    int T;
    int N;
    scanf("%d", &T);
    while (T--)   
    {
        scanf("%d", &N);
        int i;
        long long int fac = 1;
        for (int i = 1; i <= N; i++)
        {
             fac *= i;
        }
        printf("%lld \n", fac);
        
    }

    return 0;
}