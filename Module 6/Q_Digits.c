#include <stdio.h>
int main()
{
    int textCase;
    scanf("%d", &textCase);
    for (int i = 1; i <= textCase; i++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n /= 10;
        }
        while (n != 0);
        printf("\n");
    }
    return 0;
}
