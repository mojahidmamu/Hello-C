#include <stdio.h>
#include <string.h>
int main()
{
    char N[100000];
    scanf("%s", &N);
    int len = strlen(N);

    int odd_sum = 0, even_sum = 0;

    //  This is copy from CHatGPT...
    for (int i = len - 1, pos = 1; i >= 0; i--, pos++) {
    int digit = N[i] - '0'; // Convert character to digit
    if (pos % 2 == 1)
        odd_sum += digit;
    else
        even_sum += digit;
}


    int deff = abs(odd_sum - even_sum);
    if (deff % 11 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}