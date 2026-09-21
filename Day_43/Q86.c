/*
Check if a string is a palindrome.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') len++;
    bool pal = true;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            pal = false;
            break;
        }
    }
    if (pal) printf("Palindrome\n");
    else printf("Not palindrome\n");
    return 0;
}
