#include <stdio.h>
#include <string.h>
int is_palindrome(char S[])
{
    int len = strlen(S);
    int i = 0, j = len - 1;

    for (i = 0; i < len / 2; i++)
    {
        if (S[i] != S[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char S[1001];
    scanf("%s", S);
    int result = is_palindrome(S);
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
// accepted