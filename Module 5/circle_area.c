// #include <stdio.h>
// int main()
// {
//     float a;
//     float pi = 3.141592653;
//     scanf("%f", &a);
//     float Area = pi * a * a;
//     printf("%f", Area);
//     return 0;
// }

#include <stdio.h>
int main()
{
    float n;
    printf("enter a radius: ");
    scanf("%f", &n);
    float pi = 3.1416;
    float area = pi * n * n;
    printf("total area of a circle is: %f", area);

    return 0;
}