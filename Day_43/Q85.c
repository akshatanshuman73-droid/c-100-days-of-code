/*
Reverse a string.
*/

#include <stdio.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
    for (int i = len - 1; i >= 0; i--) {
        putchar(s[i]);
    }
    printf("\n");
    return 0;
}
