/**
 * Hello, world! I am learning C programming language. ^_^
Programming is fun and challenging. /\/\/\
I want to give my 100% dedication to learn!    I will succeed one day.
 */
//// Problem 1
// #include <stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\ \n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.\n");
//     return 0;
// }

// // problem-2
// #include<stdio.h>
// int main (){
//     long long int A, B;
//     scanf("%lld %lld", &A, &B);
//     printf("%lld", A * B);
// }

// problem -3
// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N % 3 == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }

// // problem 4
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

// problem 5
// #include <stdio.h>
// int main()
// {
//     long long int N;
//     scanf("%lld", &N);

//     int hasPanjabi = 0;
//     int hasShoes = 0;

//     if (N > 1000)
//     {
//         printf("I will buy Punjabi\n");
//         N -= 1000;
//         hasPanjabi = 1;
//         if (N >= 500)
//         {
//             printf("I will buy new shoes\n");
//             hasShoes = 1;
//         }
//     }

//     if (hasShoes)
//     {
//         printf("Alisa will buy new shoes\n");
//     }

//     if (!hasPanjabi && !hasShoes)
//     {
//         printf("Bad luck!\n");
//     }

//     return 0;
// }