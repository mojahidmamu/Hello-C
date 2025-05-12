// #include<stdio.h>
// void hello(int i)
// {
//     if (i > 100)
//     {
//         return ;
//     }

//     printf("%d\n", i);
//     hello(i + 3);
// }
// int main()
// {
//     hello(3);
//     return 0;
// }

// #include<stdio.h>
// void hello(int i)
// {
//     if (i <= 0)
//     {
//         return;
//     }
//     printf("%d\n", i);
//     hello(i - 2);

// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     hello(n);
//     return 0;
// }

// #include<stdio.h>
// void hello(int i)
// {
//     if (i == 6)
//     {
//         return;
//     }
//     hello(i+1); // just call at first, then print...
//     printf("%d\n", i); // this is super power of recursion

// }
// int main()
// {
//     hello(1);
//     return 0;
// }

// #include <stdio.h>
// void array_print(int a[], int n, int i)
// {
//     if (i == n)
//     {
//         return;
//     }
//     printf("%d\n", a[i]);
//     array_print(a, n, i + 1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d ", &array[i]);
//     }
//     array_print(array, n, 0);
//     return 0;
// }
#include <stdio.h>
void print_array(int a[], int n, int i)
{
if (i == n)
{
return;
}
printf("%d\n", a[i]);
print_array(a, n, i + 1);
}
int main()
{
int n;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

print_array(a, n, 0);

return 0;
} 