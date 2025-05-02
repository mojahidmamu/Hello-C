#include <stdio.h>
#include <string.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);

    char s[101];

    for (int i = 0; i < testcase; i++)
    {
        scanf("%s\n", s);
        int len = strlen(s);
        if (len > 10)
        {
            char firstChar = s[0];
            char lastChar = s[len - 1];
            printf("%c%d%c\n", firstChar, len - 2, lastChar);
        }
        else
        {
            printf("%s\n", s);
        }
    }

    return 0;
}