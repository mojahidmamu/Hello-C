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

    for (int i = 0; i <= index - 1; i++)
    {
        array[i] = array[i + 1];
    }
    
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}