#include <stdio.h>
int count_vowels(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    int count = count_vowels(str, i + 1);
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main() 
{
    char str[201];
    scanf("%s", &str);
    int result = count_vowels(str, 0);
    printf("%d", result);
    return 0;
}