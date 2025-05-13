#include <stdio.h>
void print_some(int n, int i)
{
    if (i > n )
    {
        return;
    }

    printf("%d\n", i);
    print_some(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_some(n, 1);
    return 0;
}