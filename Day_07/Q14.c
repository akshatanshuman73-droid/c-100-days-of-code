/*
Write a program to input a character and check whether it is a vowel or consonant using if–else.
*/

#include <stdio.h>
int main(void) {
    char c;
 scanf(" %c",&c);
 if(c>='A'&&c<='Z') c+=32;
 puts(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'?"Vowel":"Consonant");
    return 0;
}
