#include<stdio.h>
int main()
{
    int a = 10;
    printf("Value is: %d\n", a);
    int *p = &a;
    printf("Address is: %p\n", p);
    *p = 100;
    printf("Value is: %d ", a);
    return 0;
}