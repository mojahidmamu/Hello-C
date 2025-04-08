#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 250)
    {
        printf("Go to home");
    }
    else
    {
        printf("Go to market");
    }
    return 0;
}