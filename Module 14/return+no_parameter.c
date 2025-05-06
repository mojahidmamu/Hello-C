#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    return ans;
}
int main()
{
    printf("%d ", sum());
    // int answer = sum(); // store in another variables..
    // printf("%d", answer);   // print in another line...
    return 0;
}