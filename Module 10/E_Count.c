#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", &a);
    int length = strlen(a);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        count += a[i]- 48;
    }
    printf("%d", count);
    return 0;
}