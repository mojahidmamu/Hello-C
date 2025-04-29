// #include<stdio.h>
// int main()
// {
//     char x;
//     scanf("%c", &x);
//     if (x >= '0' && x <= '9')
//     {
//        printf("IS DIGIT\n");
//     }
//     else {
//         printf("ALPHA\n");
//         if (x >= 'a' && x <= 'z') // ('a' <= x <= 'z')
//         {
//           printf("IS SMALL\n");
//         }
//         else{
//             printf("IS CAPITAL\n");
//         }

//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a char: ");
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
        printf("IS Digit\n");
    }
    else
    {
        printf("ALPHA\n");
        if (a >= 'a' && a <= 'z')
        {
            printf("IS small\n");
        }
        else if (a >= 'A' && a <= 'Z')
        {
            printf("IS capital\n");
        }
    }

    return 0;
}