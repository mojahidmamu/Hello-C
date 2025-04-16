#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    if (a > b || b > a) 
    {
        for (int i = b; i <= a; i++)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    else
    {
        printf("");
    }
    printf(" sum =%d", sum);
    return 0;
}