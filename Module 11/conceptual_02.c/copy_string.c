#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s", s);
    int fre[26] = {0};
    int length= strlen(s);
    for (int i = 0; i < length; i++)
    {
         printf("%c ", s[i]);
    }
    
    return 0;
}