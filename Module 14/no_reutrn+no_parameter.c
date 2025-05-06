#include <stdio.h>
void sum() // void => for no return..
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d ", ans);
}
int main()
{
    sum();
    return 0;
}