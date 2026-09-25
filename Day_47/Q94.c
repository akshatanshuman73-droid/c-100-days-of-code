/*
Find the longest word in a sentence.
*/

#include <stdio.h>

int main(void) {
    char s[1000];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    
    int max_len = 0, max_start = 0;
    int curr_len = 0, curr_start = 0;
    
    for (int i = 0; ; i++) {
        char ch = s[i];
        if (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\0') {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            curr_len = 0;
            curr_start = i + 1;
            if (ch == '\0' || ch == '\n' || ch == '\r') break;
        } else {
            curr_len++;
        }
    }
    
    for (int i = 0; i < max_len; i++) {
        putchar(s[max_start + i]);
    }
    printf("\n");
    return 0;
}
