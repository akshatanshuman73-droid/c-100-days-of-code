/*
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/

#include <stdio.h>
int main(void) {
    char c;
 scanf(" %c",&c);
 if(c>='A'&&c<='Z') puts("Uppercase alphabet");
 else if(c>='a'&&c<='z') puts("Lowercase alphabet");
 else if(c>='0'&&c<='9') puts("Digit");
 else puts("Special character");
    return 0;
}
