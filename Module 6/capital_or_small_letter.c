#include <stdio.h>
#include <string.h>
int main()
{
    char a[10001];
    scanf("%s", &a);
    int len = strlen(a); 
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            printf("Digit\n");
        }
        else
        {
            printf("ALPHA\n");
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                printf("Small\n");
            }
            else if (a[i] >= 'A' && a[i] <= 'Z')
            {
                printf("Capital\n");
            }
        }
    }

    return 0;
}