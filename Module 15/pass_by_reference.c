#include<stdio.h>
void fun(int* p) // pointer > for recieving address
{
    *p = 110; // change the value of variable
}
int main()
{
    int a = 10;
    fun(&a); // & for pass address this variable
    printf("%d\n", a);
    printf("%p", &a);
    return 0;
}