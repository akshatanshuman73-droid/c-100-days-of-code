/*
Check if a matrix is symmetric.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int m[50][50];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    if (r != c) {
        printf("False\n");
        return 0;
    }
    bool sym = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] != m[j][i]) {
                sym = false;
                break;
            }
        }
        if (!sym) break;
    }
    if (sym) printf("True\n");
    else printf("False\n");
    return 0;
}
