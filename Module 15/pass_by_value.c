// #include <stdio.h>
// void m(int *p)
// {
//     int i = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", p[i]);
//     }
// }
// int main()
// {
//     int a[5] = {6, 5, 3};
//     m(a);
// }

#include <stdio.h>
void fun(int a)
{
    printf("%d\n", a);
    printf("fun er a er address %p\n", &a);
}
int main()
{
    int a = 10;
    fun(a);
    printf("%d\n", a);
    printf("main er a er value %p", &a);
    return 0;
}