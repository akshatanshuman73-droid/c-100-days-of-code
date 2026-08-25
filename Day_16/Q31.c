/*
Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>
int main(void) {
    unsigned int n,mask=1;
 scanf("%u",&n);
 while(mask<=n/2)mask*=2;
 do{
putchar((n&mask)?'1':'0');
mask/=2;
}
while(mask);
 putchar('\n');
    return 0;
}
