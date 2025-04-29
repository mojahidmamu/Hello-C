// #include <stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     if (A % B == 0)
//     {
//         printf("Multiples");
//     }
//     else if (B % A == 0)
//     {
//         printf("Multiples");
//     }
//     else
//     {
//         printf("No Multiples");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("Not Multiples\n");
    }

    return 0;
}