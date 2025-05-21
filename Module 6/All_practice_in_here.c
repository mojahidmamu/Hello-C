// // Fixed password:
// #include<stdio.h>
// int main()
// {
//     int pass ;
// while (scanf("%d", &pass) != EOF)
//     {
//         if (pass == 2024)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else{
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

// Finding the max number:
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         scanf("%d", &a);
//         if (a > max)
//         {
//             max = a;
//         }
//     }
//     printf("%d", max);
//     return 0;
// }

// Multiple table for one number:
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d * %d = %d", n, i, n * i);
//     }

//     return 0;
// }

// Divisor:
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//          if (a % i == 0)
//          {
//             printf("%d \n", i);
//          }
//     }
//     return 0;
// }

// Pyramid:
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}