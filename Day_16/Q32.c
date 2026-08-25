/*
Write a program to check if a number is a palindrome.
*/

#include <stdio.h>
int main(void) {
    long long n,t,r=0;
 scanf("%lld",&n);
 t=n;
 while(t){
r=r*10+t%10;
t/=10;
}
 puts(r==n?"Palindrome":"Not palindrome");
    return 0;
}
