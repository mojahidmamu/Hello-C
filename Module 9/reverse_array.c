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
    // for loop:
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        // swap
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // Whilte loop: // ****
    // int i = 0;
    // int j = n - 1;
    // while (i < j)
    // {
        // swap // ****
    //     int temp = array[i];
    //     array[i] = array[j];
    //     array[j] = temp;
        // increment or decrement //*** */
    //     i++;
    //     j--;
    // }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", array[i]);
    }
    return 0;
}