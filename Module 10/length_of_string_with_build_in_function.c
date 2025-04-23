#include <stdio.h>
#include <string.h> // THIS IS FOR "strlen" build-in-funtion,
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