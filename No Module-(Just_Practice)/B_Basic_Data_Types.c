#include <stdio.h>
int main()
{
    int a;
    long long int b;
    char c;
    float f;
    float d;
    scanf("%d %lld %c %f %f", &a, &b, &c, &f, &d);
    printf("%d\n%lld\n%c\n%.2f\n%.1f\n", a, b, c, f, d);

    return 0;
}