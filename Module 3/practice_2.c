// #include<stdio.h>
// int main()
// {
//     printf("I Love Practice");
//     return 0;
// }

// Problem-2
// #include<stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a + b);
//     return 0;
// }

// problem 3
// #include<stdio.h>
// int main()
// {
//     int a;
//     long long int b;
//     double c;
//     char d;
//     scanf("%d %lld %lf %c", &a, &b, &c, &d);
//     printf("%d\n%lld\n%.2lf\n%c\n", a, b, c, d);
//     return 0;
// }

// problem 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("I Love Practice\n");
//     }

//     return 0;
// }

// problem 5
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     for(int i = 1; i <= a; i++)
//     {
//         if(i % 5 == 0)
//         {
//             printf("%d Yes\n", i);
//         }
//         else
//         {
//             printf("%d No\n", i);
//         }
//     }

//     return 0;
// }

// FACTORIAL PROBLEM: 
#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum = sum * i;
    }
    printf("FINAL factorial: %d", sum);
    return 0;
}
