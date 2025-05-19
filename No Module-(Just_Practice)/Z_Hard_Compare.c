#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int num1 = a ^ b;
    int num2 = c ^ d;
    if (num1 > num2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}