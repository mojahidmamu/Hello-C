// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int arr1[a];
//     for (int i = 0; i < a; i++)
//     {
//          scanf("%d ", arr1[i]);
//     }

//     int b;
//     scanf("%d", &b);
//     int arr2[b];
//     for (int i = 0; i < b; i++)
//     {
//         scanf("%d ", &arr2[i]);
//     }

//     int arr3[a+b];
//     for (int i = 0; i < a; i++)
//     {
//          arr3[i] = arr1[i];
//     }
//     for (int i = 0; i < b; i++)
//     {
//         arr3[i+a] = arr2[i];
//     }

//     for (int i = 0; i < a+b; i++)
//     {
//         printf("%d ", arr3[i]);
//     }
//     return 0;
// }

// delete-an element from an array:
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", arr[i]);
//     }
//     int index;
//     scanf("%d", &index);
//     for (int i = index; i <= n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// insert an element in an array:
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", arr[i]);
//     }
//     int index, value;
//     scanf("%d %d", &index, &value);
//     for (int i = n; i >= index + 1; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[index] = value;
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }