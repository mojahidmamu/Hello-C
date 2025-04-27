#include <stdio.h>
int main()
{
    int a;
    scanf("%d ", &a);
    for (int testCase = 0; testCase < a; testCase++)
    {
        char strng[10001];
        scanf("%s", strng);

        int capitalLeter = 0;
        int smallLetter = 0;
        int digitOrNumber = 0;

        for (int i = 0; strng[i] != '\0'; i++)
        {
            if (strng[i] >= 'A' && strng[i] <= 'Z')
            {
                capitalLeter++;
            }
            else if (strng[i] >= 'a' && strng[i] <= 'z')
            {
                smallLetter++;
            }
            else if (strng[i] >= '0' && strng[i] <= '9')
            {
                digitOrNumber++;
            }
        }
        printf("%d %d %d\n", capitalLeter, smallLetter, digitOrNumber);
    }

    return 0;
}