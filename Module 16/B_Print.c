#include <stdio.h>
int print_1_to_n(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_1_to_n(n);
    return 0;
}