/*
Add two matrices.
*/

#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    int m1[50][50];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    if (scanf("%d %d", &r2, &c2) != 2) return 0;
    int m2[50][50];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    if (r1 != r2 || c1 != c2) return 0;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d%s", m1[i][j] + m2[i][j], (j == c1 - 1) ? "" : " ");
        }
        printf("\n");
    }
    return 0;
}
