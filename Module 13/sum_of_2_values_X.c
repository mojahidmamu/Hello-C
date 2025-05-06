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
    int x;           // initialize value of X..
    scanf("%d", &x); // input the value of X...
    int flag = 0;
    for (int i = 0; i < n - 1; i++) // i from 0 to n-1,
    {
        for (int j = i + 1; j < n; j++) // j from i+1 to n
        {
            if (arr[i] + arr[j] == x) // if> i+ j = x,
            {
                flag = 1; // flag is increment...
            }
        }
    }
    if (flag) // if(flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}