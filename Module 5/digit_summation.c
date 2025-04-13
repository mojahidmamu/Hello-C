#include <stdio.h>
int main()
{
    long long int Number1, Number2;
    int LastDigit1, LastDigit2;
    scanf("%lld %lld", &Number1, &Number2);

    LastDigit1 = Number1 % 10;
    LastDigit2 = Number2 % 10;
    int sum = LastDigit1 + LastDigit2;
 
    printf("%d\n", sum);
    return 0;
}