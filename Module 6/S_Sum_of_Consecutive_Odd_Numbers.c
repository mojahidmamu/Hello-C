#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);

        int sum = 0;
        // Ensure X is less than Y
        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        // Iterate between X and Y (exclusive)
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
