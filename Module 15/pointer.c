#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    printf("%p\n", &a); // %p => for pointer variable..

    int *ptr; // declare the pointer variable
    ptr = &a; // &a for declare address of a..
    *ptr = 200;
    printf("%p\n", ptr);
    printf("%d\n", a);
    return 0;
}