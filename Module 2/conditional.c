// if && else statement:
#include <stdio.h>

int main()
{
    int tk;
    printf("enter a number of TK: ");
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Burger kabo \n");
    }
    else if (tk >= 50)
    {
        printf("Fuska kabo na ");
    }
    else
    {
        printf("Orange kobo \n");
    }
    
   
    return 0;
}