#include <stdio.h>
void print_some(int n, int i)
{
    if (i == n + 1)
    {
        return;
    }

    print_some(n, i + 1);
    printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_some(n, 1);
    return 0;
}