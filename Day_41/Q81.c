/*
Count characters in a string without using built-in length functions.
*/

#include <stdio.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int count = 0;
    while (s[count] != '\0' && s[count] != '\n' && s[count] != '\r') {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
