#include<stdio.h>
int main()
{
    int a = 10, b = 20, temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
//  printf("A = %dB = %d", a, b);
    return 0;
}