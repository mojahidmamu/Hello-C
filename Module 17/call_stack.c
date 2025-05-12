#include <stdio.h>
void mello()
{
    printf("Mello ");
}
void gelllo()
{
    printf("Gello ");
    mello();
}
void hello()
{
    printf("Hello ");
    gelllo();
}
int main()
{
    printf("Hi ");
    hello();
    return 0;
}
