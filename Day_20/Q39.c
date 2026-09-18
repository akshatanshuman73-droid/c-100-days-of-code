/*
Write a program to find the product of odd digits of a number.
*/

#include <stdio.h>
int main(void) {
    long long n;
 int p=1,d;
 scanf("%lld",&n);
 if(n<0)n=-n;
 while(n){
d=n%10;
if(d%2)p*=d;
n/=10;
}
 printf("%d\n",p);
    return 0;
}
