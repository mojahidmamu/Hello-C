// Function to Find the Factorial of a Number (using loop)
#include<stdio.h>

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*= i;
    }
    return fact;
}

int main()
{
    int num = 5;
    // printf("Factorial of %d is %d", num, factorial(num));
    
    return 0;
}