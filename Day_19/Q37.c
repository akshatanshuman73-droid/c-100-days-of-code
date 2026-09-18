/*
Write a program to find the LCM of two numbers.
*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long a,b,x,y,t,g;
 scanf("%lld%lld",&a,&b);
 x=a;
y=b;
 while(y){
t=x%y;
x=y;
y=t;
}
 g=x<0?-x:x;
 printf("%lld\n",g?llabs(a/g*b):0);
    return 0;
}
