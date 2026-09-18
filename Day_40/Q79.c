/*
Perform diagonal traversal of a matrix.
*/

#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int m[50][50];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    int first = 1;
    for (int s = 0; s <= (r - 1) + (c - 1); s++) {
        if (s % 2 == 0) {
            int r_start = (s < r - 1) ? s : r - 1;
            int r_end = (s - (c - 1) > 0) ? s - (c - 1) : 0;
            for (int i = r_start; i >= r_end; i--) {
                int j = s - i;
                if (!first) printf(" ");
                printf("%d", m[i][j]);
                first = 0;
            }
        } else {
            int r_start = (s - (c - 1) > 0) ? s - (c - 1) : 0;
            int r_end = (s < r - 1) ? s : r - 1;
            for (int i = r_start; i <= r_end; i++) {
                int j = s - i;
                if (!first) printf(" ");
                printf("%d", m[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");
    return 0;
}
