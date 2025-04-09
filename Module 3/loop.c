// For loop :
#include <stdio.h>
int main()
{
    // for( int i = 1; i <= 10; i++){
    //     printf("%d Sorry\n ", i);
    // }

    // for (int i = 1; i <= 5; i++) {
    //     printf("%d\n", i);
    // }

    // Sum of 1 to N :
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}