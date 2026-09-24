/*
Find the first repeating lowercase alphabet in a string.
*/

#include <stdio.h>

int main(void) {
    char s[500];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    int freq[26] = {0};
    int len = 0;
    while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') {
        if (s[len] >= 'a' && s[len] <= 'z') {
            freq[s[len] - 'a']++;
        }
        len++;
    }
    char first_repeat = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && freq[s[i] - 'a'] > 1) {
            first_repeat = s[i];
            break;
        }
    }
    if (first_repeat) printf("%c\n", first_repeat);
    else printf("-1\n");
    return 0;
}
