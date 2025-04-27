#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
    return 0;
}