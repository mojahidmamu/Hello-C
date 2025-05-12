#include <stdio.h>
void hello(int i)
{
    if (i == 6)
    {
        return;
    }
    hello(i + 1); // increment when i = 6, then stop & print
    printf("%d\n", i); // print i = 5;
}
int main()
{
    hello(1);
    return 0;
}