#include<stdio.h>
int main()
{
    int X;
    printf("enter a number: ");
    scanf("%d", &X);
    // int digit = X / 1000;
    if(X % 2 == 0)
    {
      printf("EVEN\n");
    }
    else {
      printf("ODD\n");
    }
    return 0;
}