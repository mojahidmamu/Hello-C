// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N == 1)
//     {
//         printf("-1");
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
         printf("-1");
    }
    
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}