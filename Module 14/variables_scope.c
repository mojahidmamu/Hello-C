#include <stdio.h>
int a= 10; // Global variable. Access in every function
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