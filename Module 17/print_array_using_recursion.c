#include<stdio.h>
void print_array(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    
    printf("%d\n", arr[i]);
    print_array(arr, n, i+1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &array[i]);
    }
    print_array(array, n, 0);
    return 0;
}