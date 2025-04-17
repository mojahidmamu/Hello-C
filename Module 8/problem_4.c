#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum_pos = 0;
    int sum_neg = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
         scanf("%d", &val);
         if (val > 0)
         {
            sum_pos += val;
         }
         else if (val < 0)
         {
             sum_neg += val;
         }
    }
    printf("%d %d\n", sum_pos,sum_neg);
    
    return 0;
}