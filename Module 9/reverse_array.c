// Reverse an array:
#include<stdio.h>
int main()
{
    int n;
    scanf("%d ", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int i = 0, j = n-1;
    while (i < j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}






// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &array[i]);
//     }
//     // for loop:
//     for (int i = 0, j = n - 1; i < j; i++, j--)
//     {
//         // swap
//         int temp = array[i];
//         array[i] = array[j];
//         array[j] = temp;
//     }

//     // Whilte loop: // ****
//     // int i = 0;
//     // int j = n - 1;
//     // while (i < j)
//     // {
//         // swap // ****
//     //     int temp = array[i];
//     //     array[i] = array[j];
//     //     array[j] = temp;
//         // increment or decrement //*** */
//     //     i++;
//     //     j--;
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", array[i]);
//     }
//     return 0;
// }


