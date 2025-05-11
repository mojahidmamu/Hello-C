#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min, mid, max;
    // For a:
    if (a < b && a < c)
    {
        min = a;
        if (b > c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    // For b:
    if (b < c && b < a)
    {
        min = b;
        if (a > c)
        {
            mid = a;
            min = c;
        }
        else
        {
            mid = c;
            min = a;
        }
    }
    // For c:
    if (c < a && c < b)
    {
        min = c;
        if (b > c)
        {
            mid = b;
            min = c;
        }
        else
        {
            mid = c;
            min = b;
        }
    }
    printf("%d\n%d\n%d\n", min, mid, max);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}