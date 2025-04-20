//  insert an element
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int array[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &array[i]);
//     }
//     int index, value;
//     scanf("%d %d", &index, &value);

//     for (int i = n; i >= index + 1; i--)
//     {
//         array[i] = array[i - 1];
//     }
//     array[index] = value;
//     for (int i = 0; i <= n; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }

// remove an element from an arry:
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
//     int position;
//     scanf("%d ", &position);
// logic
//     for (int i = position; i <= n - 1; i++)
//     {
//         array[i] = array[i = 1];
//     }
// pirnt
//     for (int i = 0; i < n - 1; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     return 0;
// }




// reverse an array :
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &array[n]);
//     }
//     int i = 0, j = n -1;
//     while (i < j)
//     {
//         int temp = array[i];
//         array[i] = array[j];
//         array[j] = temp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", array[i]);
//     }

//     return 0;
// }



// swap two variables:
// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("%d %d %d", a, b, temp);

//     return 0;
// }