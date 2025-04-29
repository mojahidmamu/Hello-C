// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     printf("Final factorial: %d", fact);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
         fact*= i;
    }
    printf("Final factorial is : %d", fact);
    
    return 0;
}