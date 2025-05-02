// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n], original[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &a[i]);
//         original[i] = a[i];
//     }
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
//     int palirdrome = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != original[i])
//         {
//             palirdrome = 0;
//             break;
//         }
//     }
//     if (palirdrome)
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
    int n;
    scanf("%d", &n);
    int a[n];
    int original[n]; // initialize a new array for compare the old array:
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
        original[i] = a[i];
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    int palirdrome = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != original[i])
        {
            palirdrome = 0;
            break;
        }
    }
    if (palirdrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}