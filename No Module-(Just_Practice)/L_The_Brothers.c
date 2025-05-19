#include <stdio.h>
#include<string.h>
int main()
{
    char first1[50], last1[50];
    char first2[50], last2[50];
    scanf("%s %s", first1, last1);
    scanf("%s %s", first2, last2);

    if (strcmp(last1, last2) == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}