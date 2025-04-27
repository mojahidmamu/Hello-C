#include <stdio.h>
int main()
{
    char a[100001];
    scanf("%s ", a);
    int consCount = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        {
            consCount++;
        }
    }
    printf("%d", consCount);
    return 0;
}