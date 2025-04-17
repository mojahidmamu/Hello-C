// Function to Check if a Number is Even or Odd
#include<stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd.\n", n);
    }
    
}

int main()
{
    checkEvenOdd(10);
    checkEvenOdd(7);
    return 0;
}