/*
Find the sum of main diagonal elements for a square matrix.
*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int sum = 0, val;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &val);
            if (i == j) sum += val;
        }
    }
    printf("%d\n", sum);
    return 0;
}
