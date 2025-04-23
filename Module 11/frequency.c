#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
        else if (arr[i] == 3)
        {
            count3++;
        }
        else if (arr[i] == 4)
        {
            count4++;
        }
        else if (arr[i] == 5)
        {
            count5++;
        }
    }
    printf("%d -> %d\n", 0, count0);
    printf("%d -> %d\n", 1, count1);
    printf("%d -> %d\n", 2, count2);
    printf("%d -> %d\n", 3, count3);
    printf("%d -> %d\n", 4, count4);
    printf("%d -> %d\n", 5, count5);

    return 0;
}