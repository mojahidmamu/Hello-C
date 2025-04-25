#include <stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
   
    int count1 = strlen(a);
    int count2 = strlen(b);
     
    
    printf("%d %d\n", count1, count2);
    printf("%s %s", a, b);
    return 0;
}
