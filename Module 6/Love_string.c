#include <stdio.h>
#include <string.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int t = 0; t < testcase; t++)
    {
        char s[51], t[51];
        scanf("%s %s", &s, &t);
        int len_s = strlen(s);
        int len_t = strlen(t);

        int i = 0, j = 0;
        while (i < len_s && j < len_t)
        {
            printf("%c%c", s[i], t[j]);
            i++;
            j++;
        }
        while (i < len_s)
        {
            printf("%c", s[i]);
            i++;
        }
        while (j < len_t)
        {
            printf("%c", t[j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}