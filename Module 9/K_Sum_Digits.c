// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     int n = 1000001;
//     scanf("%d", &n);
//     int array[n+1];
//     scanf("%s", array);
     
     
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += array[i] - '0';
//     }
//     printf("%d", sum);

//     return 0;
// }
#include <stdio.h>

int main() {
    int N, sum = 0;
    long long num;
    
    scanf("%d", &N);        // Read number of digits
    scanf("%lld", &num);    // Read the entire number as a single long long

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("%d\n", sum);
    return 0;
}
