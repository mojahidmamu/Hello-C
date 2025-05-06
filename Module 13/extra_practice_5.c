#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}