/*
Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>
int main(void) {
    char s[1000];
 int i;
 scanf("%999s",s);
 for(i=0;
s[i];
i++){
if(s[i]=='0')putchar('1');
else if(s[i]=='1')putchar('0');
else{
puts("Invalid binary number");
return 0;
}
}
 putchar('\n');
    return 0;
}
