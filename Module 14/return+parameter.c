#include <stdio.h>
int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}
int main()
{
    printf("%d\n", sum(10, 5     )); // print & function call in a line..
    int mojahid = sum(10, 5);   // store in another variables..
    printf("%d", mojahid);      // print in another line...
    return 0;
}