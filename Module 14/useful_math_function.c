#include <stdio.h>
#include <math.h> // for build-in function:
int main()
{
    /*
    some important || useful math build-in function:
    1. ceil => 4.2 == 5
    2. floor => 4.2 == 4
    3. round => 3.5 or 3.6 or 3.8 == 4
    => but round => 3.4 == 3
    4. sqrt => 25 == 5
    5. pow => (3,2) == 9 , 3 power 2.
    6.abs => (-10) || (10) || (-55.5) == provide positive value;
    */
    int ceil1 = ceil(4.5);
    printf("%d ", ceil1);
    int floor1 = floor(4.5);
    printf("%d ", floor1);
    return 0;
}