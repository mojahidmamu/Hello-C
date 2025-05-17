// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 1;
//     int space = 5;
//     for (int i = 1; i <= n; i++) // for printing line
//     {
//         for (int j = 1; j <= space; j++) // for space
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star+= 3;
//         space--;
//     }

//     int arr[5][n];
//     for (int i = 0; i < 5; i++) // this is last part of the problem:
//     {
//          for (int j = 1; j <= space; j++)
//          {
//             printf(" ");
//          }
         
//         for (int j = 0; j < n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total_top_rows = N + 3;
    int max_stars = 2 * total_top_rows - 1;

    // Print the top (branches)
    for (int i = 1; i <= total_top_rows; i++) {
        int stars = 2 * i - 1;
        int spaces = (max_stars - stars) / 2;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the trunk
    int trunk_lines = N + 2;
    int trunk_spaces = (max_stars - N) / 2;

    for (int i = 0; i < trunk_lines; i++) {
        for (int j = 0; j < trunk_spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
