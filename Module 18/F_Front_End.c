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
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
          if (i % 2 == 0) {
            printf("%d ", arr[left]);
            left++;
        } else {
            printf("%d ", arr[right]);
            right--;
        }
    }

    return 0;
}