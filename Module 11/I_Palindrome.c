#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    scanf("%s", &a);
    int length = strlen(a);
    int palindrome = 1;
    int i = 0, j = length - 1;

    for (i = 0; i < length / 2; i++)
    {

        if (a[i] != a[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}