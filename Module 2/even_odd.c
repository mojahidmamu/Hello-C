 
#include<stdio.h>

int main () {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("This is positive number\n");
    }
    else
    {
        printf("this is negative number\n");
    }
    return 0;
}