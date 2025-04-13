#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int digit = X / 1000;
    if(digit % 2 == 0)
    {
      printf("EVEN\n");
    }
    else {
      printf("ODD\n");
    }
    return 0;
}