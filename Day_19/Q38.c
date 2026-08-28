/*
Write a program to find the sum of digits of a number.
*/

#include <stdio.h>
int main(void) {
    long long n;
 int s=0;
 scanf("%lld",&n);
 if(n<0)n=-n;
 while(n){
s+=n%10;
n/=10;
}
 printf("%d\n",s);
    return 0;
}
