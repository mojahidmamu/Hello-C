#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int last1 = a % 10;
        int first1 = a / 10;
        int first2 = first1 % 10;
        printf("%d %d %d\n", last1, first2, first1);
    }
    
    return 0;
}
