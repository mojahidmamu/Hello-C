#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hasPanjabi = 0;
    int hasShoes = 0;

    if (n > 1000)
    {
        printf("I will buy a panjabi");
        n -= 1000;
        hasPanjabi = 1;
        if (n >= 500)
        {
            printf("I will buy a shoes");
            hasShoes = 1;
        }
    }
    if (hasShoes)
    {
         printf("Alisa will buy shoes");
    }
    if (!hasPanjabi && !hasShoes)
    {
         printf("Bad luck\n");
    }
    return 0;
}