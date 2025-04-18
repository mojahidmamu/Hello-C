// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", array[i]);
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d ", array[i]);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d. I want more assignment\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     if (x > 0)
//     {
//         for (int i = 0; i <= x; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else if (x < 0 )
//     {
//         for (int i = x ; i <= 0; i++)
//         {
//              printf("%d ", i);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);

//     int pos_val = 0;
//     int neg_val = 0;

//     for (int i = 0; i < a; i++)
//     {
//         int numbers;
//         scanf("%d ", &numbers);

//         if (numbers > 0)
//         {
//             pos_val += numbers;
//         }
//         else if (numbers < 0)
//         {
//             neg_val += numbers;
//         }
//     }

//     return 0;
// }