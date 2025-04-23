#include <stdio.h>
#include <string.h>
int main()
{
    char a[101];
    scanf("%s", a);
    int size = strlen(a); // using build function

    // This is manually:
    // int count = 0;
    // for (int i = 0; a[i] != '\0'; i++)
    // {
    //     count++;
    // }
    printf("%d", size);
    return 0;
}