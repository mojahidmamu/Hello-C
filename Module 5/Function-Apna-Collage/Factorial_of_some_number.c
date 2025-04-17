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
    factorial(5);
    factorial(3);
    
    return 0;
}