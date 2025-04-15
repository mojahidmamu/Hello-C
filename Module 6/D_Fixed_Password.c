// #include <stdio.h>
// int main()
// {
//     int n;
//     while (scanf("%d", &n))
//     {
//         if (n == 1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int pass;

    while (scanf("%d", &pass) != EOF)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}