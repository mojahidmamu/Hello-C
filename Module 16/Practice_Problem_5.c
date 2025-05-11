#include<stdio.h>
void swp_it(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swp_it(&a, &b);
    printf("%d %d", a, b);
    return 0;
}