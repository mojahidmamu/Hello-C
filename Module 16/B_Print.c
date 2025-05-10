#include <stdio.h>
int print_1_to_n()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    print_1_to_n();
    return 0;
}