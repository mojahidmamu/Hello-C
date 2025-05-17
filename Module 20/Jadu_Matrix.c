 // #include <stdio.h>
// int main()
// {
//     int R, C;
//     scanf("%d %d", &R, &C);

//     if (R != C)
//     {
//         printf("NO\n");
//         return 0;
//     }

//     int arr[100][100];
//     int jadu = 1;

//     for (int i = 0; i < R; i++)
//     {
//         for (int j = 0; j < C; j++)
//         {
//             scanf("%d", &arr[i][j]);

//             if (i == j || i + j == n - 1)
//             {
//                 if (arr[i][j] != 1)
//                 {
//                     jadu = 0;
//                 }
//             }
//             else
//             {
//                 if (arr[i][j] != 0)
//                 {
//                     jadu = 0;
//                 }
//             }
//         }
//     }

//     if (jadu)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int R, C;
    scanf("%d %d", &R, &C);

    if (R != C)
    {
        printf("NO\n");
        return 0;
    }

    int arr[100][100];
    int flag = 1;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == j || i + j == R - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
// Accepted...