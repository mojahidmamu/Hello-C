#include <stdio.h>
void print_some(int n, int i)
{
    if (i == n )
    {
        return;
    }

    printf("I love Recursion\n");
    print_some(n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_some(n, 0);
    return 0;
}