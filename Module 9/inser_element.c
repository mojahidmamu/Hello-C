#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);

    for (int i = n; i >= index + 1; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}