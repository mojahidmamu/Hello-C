#include <stdio.h>
int main()
{
    int n; // array size
    scanf("%d", &n);
    int arr[n]; // initialize array
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]); // input the array
    }

    for (int i = 0; i < n - 1; i++) // i from 0 to n-1,
    {
        for (int j = i + 1; j < n; j++) // j from i+1 to n...
        {
            if (arr[i] > arr[j]) // serial is not OK... 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}