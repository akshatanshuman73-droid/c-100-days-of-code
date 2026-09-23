/*
Toggle case of each character in a string.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n' && s[i] != '\r'; i++) {
        if (islower(s[i])) putchar(toupper(s[i]));
        else if (isupper(s[i])) putchar(tolower(s[i]));
        else putchar(s[i]);
    }
    printf("\n");
    return 0;
}
