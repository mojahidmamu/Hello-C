// #include<stdio.h>
// int main()
// {
//     long long int N;
//     printf("Enter a number: ");
//     scanf("%lld", &N);
//     long long int sum = N * (N + 1) / 2;
//     printf("%lld\n", sum);
//     return 0;
// }


// Loop: 
#include<stdio.h>
int main()
{
    long long int N;
    printf("Enter a number: ");
    scanf("%lld", &N);
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
          sum += i;
    }
    printf("%d", sum);
    
    return 0;
}