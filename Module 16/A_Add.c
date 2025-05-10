#include<stdio.h>
int sum(int a, int b)
{
    int summation = a+b;
    printf("%d", summation);
    return summation;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}