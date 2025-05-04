// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n - 1;
//     for (int i = 1; i <= n; i++) // for printing lines: 
//     {
//         for (int j = 1; j <= space; j++) // for printing space:
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++) // for printing star:
//         {
//             printf("*");
//         }
//         printf("\n");
//         star++;
//         space--;
//     }
//     return 0;
// }


// more pattern:
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    int space = 0;
    for (int i = 1; i <= n; i++) // for printing lines:
    {
        for (int k = 1; k <= space; k++) // for printing space:
        {
            printf(" ");
        }
        for (int j = star; j >= 0; j--) // for printing star:
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}