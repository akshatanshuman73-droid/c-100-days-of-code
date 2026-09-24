/*
Remove all vowels from a string.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') continue;
        putchar(s[i]);
    }
    printf("\n");
    return 0;
}
