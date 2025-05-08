#include<stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    int* p= &a;
    printf("%d", *p);
    return 0;
}