#include <stdio.h>
char my_len(char S[])
{
    int count = 0;
    for (int i = 0;S[i] != '\0' ; i++)
    {
        count++;
    }
    
    return count;
    
}
int main()
{
    char S[1000];
    scanf("%s", &S);
    int len = my_len(S);
    printf("%d", len);
    return 0;
}