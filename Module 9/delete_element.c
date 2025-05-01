// Insert a element in an array:
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    int index;
    scanf("%d", &index);

    for (int i = index; i <= n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    // n--;
    for (int i = 0; i < n-1; i++) 
    {
        printf("%d ", array[i]);
    }
    return 0;
}