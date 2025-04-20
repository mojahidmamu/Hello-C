#include<stdio.h>
int main()
{
    int a = 5, b= 8, temp;
    temp = a;
    a= b;
    b = temp;
    printf("%d %d %d ", a, b, temp);
    return 0;
}