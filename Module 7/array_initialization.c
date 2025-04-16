// #include<stdio.h>
// int main()
// {
//     int a; // only declare the variable
//     int b = 10; // declare and initialization variable
//     int ar[5];  // only declare the array
//     int arr[5] = {10,20,30,40,50}; // declare and initialization the array
//     return 0;
// }

#include<stdio.h>
int main()
{
    int arr[5] = {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",arr[i]);
    }
    
    return 0;
}