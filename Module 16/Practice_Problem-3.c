#include <stdio.h>
int count_odd(int array[], int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            odd++;
        }
    }
    return odd;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int Total_odd = count_odd(array, n);
    printf("%d", Total_odd);

    return 0;
}