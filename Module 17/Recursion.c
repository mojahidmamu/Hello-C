// #include<stdio.h>
// void gello(){
//     printf("Gello ");
// }
// void hello(){
//     gello();
//     printf("Hello ");
// }
// int main()
// {
//     printf("Main ");
//     hello();
//     return 0;
// }

// #include <stdio.h>
// void fun()
// {
//     printf("fun\n");
  
// }
// int main()
// {
//     fun();
// }

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