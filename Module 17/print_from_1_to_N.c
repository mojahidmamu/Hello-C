#include <stdio.h>
void hello(int i)
{
    if (i == 6)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
}
int main()
{

    hello(i);
    return 0;
}