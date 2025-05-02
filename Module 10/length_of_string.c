// #include <stdio.h>
// int main()
// {
//     char a[101];
//     scanf("%s", a);
//     int count = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }
#include <stdio.h>
int main()
{
    char array[10001];
    scanf("%s", array);
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);

    return 0;
}