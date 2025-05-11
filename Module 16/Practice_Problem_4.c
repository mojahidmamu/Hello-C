#include <stdio.h>
void change_it(int array[], int len)
{

    if (len > 0)
    {
        array[len - 1] = 100;
    }
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
     
    change_it(array, n);
    // print updated array: 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}