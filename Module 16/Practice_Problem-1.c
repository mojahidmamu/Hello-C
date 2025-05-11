#include<stdio.h>
#include <stdlib.h>
int my_abs(int n)
{
    int absolate = abs(n);
    // printf("%d", absolate);
    return absolate;
}
int main()
{
    int n;
    scanf("%d", &n);
    int mojahid = my_abs(n);
    printf("%d", mojahid);
    return 0;
}