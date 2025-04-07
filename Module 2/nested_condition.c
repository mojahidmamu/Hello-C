#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Go to Cox,s Bazar\n");
        if (tk >= 10000)
        {
            printf("Go to Sentmartin\n");
        }
        else 
        {
            printf("Go back in home\n");
        }
    }
    else 
    {
        printf("Don't go anyehere\n");
    }
    return 0;
}