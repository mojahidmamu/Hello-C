#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a;
    scanf("&d", &a);

    int find = 0;

    for (int i = 0; i < n; i++)
    {
         if (arr[i] == a)
         {
           printf("%d", i);
           find= 1;
         }
         
    }
    
    if (!find)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}