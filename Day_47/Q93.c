/*
Check if two strings are anagrams of each other.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char s1[500], s2[500];
    if (!fgets(s1, sizeof(s1), stdin)) return 0;
    if (!fgets(s2, sizeof(s2), stdin)) return 0;
    
    int f1[256] = {0}, f2[256] = {0};
    for (int i = 0; s1[i] != '\0' && s1[i] != '\n' && s1[i] != '\r'; i++) f1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0' && s2[i] != '\n' && s2[i] != '\r'; i++) f2[(unsigned char)s2[i]]++;
    
    bool anagram = true;
    for (int i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            anagram = false;
            break;
        }
    }
    if (anagram) printf("Anagrams\n");
    else printf("Not anagrams\n");
    return 0;
}
