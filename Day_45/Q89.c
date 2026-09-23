/*
Count frequency of a given character in a string.
*/

#include <stdio.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    char target;
    if (scanf(" %c", &target) != 1) return 0;
    int count = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (s[i] == target) count++;
    }
    printf("%d\n", count);
    return 0;
}
