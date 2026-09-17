/*
Check if the elements on the diagonal of a matrix are distinct.
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
    int diag[50];
    int n = (r < c) ? r : c;
    for (int i = 0; i < n; i++) {
        diag[i] = m[i][i];
    }
    bool distinct = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }
    if (distinct) printf("True\n");
    else printf("False\n");
    return 0;
}
