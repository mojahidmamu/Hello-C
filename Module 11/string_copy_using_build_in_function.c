#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    
    strcpy(a, b); // build in function

    printf("%s %s", a, b);
    
    return 0;
}