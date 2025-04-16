// 1
// #include <stdio.h>
// int main()
// {
//     int arr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (i % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }

// 2
// #include<stdio.h>
// int main()
// {
//     int arr[6];
//     int count = 0;
//     for (int i = 0; i < 6; i++)
//     {
//         scanf("%d", &arr[i]);
//         if (i % 2 != 1)
//         {
//             printf("%d ", arr[i]);
//             count++;
//         }
//     }
//     printf("\nTotal odd: %d", count);

//     return 0;
// }

// 3
#include <stdio.h>
int main()
{
    int arr[6];
    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        if (i > max)
        {
            max = i;
        }
    }
    printf("\nMax number is: %d", max);

    return 0;
}