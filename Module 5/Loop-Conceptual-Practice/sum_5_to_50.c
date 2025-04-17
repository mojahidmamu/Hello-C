#include <stdio.h>
int main()
{
    int a = 5;
    int sum = 0;
    for (int i = a; i <= 50; i++)
    {
        sum += i;
    }
    printf("Sum of 5 to 50 is: %d\n", sum);
    return 0;
}
