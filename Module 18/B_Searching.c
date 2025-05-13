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

    int element;
    scanf("%d", &element);

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if ( arr[i] == element)
        {
            index = i;
            break;
        }
    }

    printf("%d", index);
    return 0;
}