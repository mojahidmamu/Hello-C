#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int partokko = a - b;
    if (partokko >= 0)
    {
        printf("%d", partokko);
    }
    else
    {
        printf("0");
    }

    return 0;
}