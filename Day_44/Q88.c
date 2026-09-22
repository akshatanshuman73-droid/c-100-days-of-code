/*
Replace spaces with hyphens in a string.
*/

#include <stdio.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (s[i] == ' ') putchar('-');
        else putchar(s[i]);
    }
    printf("\n");
    return 0;
}
