#include <stdio.h>
int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int allFarmers = M1 + M2;
        int newWorkingDay = (M1 * D) / allFarmers;
        int fewerDay = D - newWorkingDay;
        
        printf("%d\n", fewerDay);
    }

    return 0;
}