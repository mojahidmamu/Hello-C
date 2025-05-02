#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n %s", &a, &b);
    printf("%d ", strlen(a));
    printf("%d\n", strlen(b));
    printf("%s\n", strcat(a, b));
    char first1 = a[0];
    char first2 = b[0];

    // Create modified strings
    char modified1[11], modified2[11];
    snprintf(modified1, sizeof(modified1), "%c%s", b[0], a + 1);
    snprintf(modified2, sizeof(modified2), "%c%s", a[0], b + 1);

    // Print modified strings
    printf("%s %s\n", modified1, modified2);
    return 0;
}