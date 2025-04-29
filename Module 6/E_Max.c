// #include<stdio.h>
// int main()
// {
//     int n;
//     int a;
//     int max = 0;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//          scanf("%d", &a);
//          if ( a > max)
//          {
//              max = a;
//          }
//     }
//     printf("%d", max);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;

    for (int i = 0; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        if (a > max)
        {
             max = a;
        }
    }
    printf("%d", max);

    return 0;
}