/*
Write a program to swap the first and last digit of a number.
*/

#include <stdio.h>
int main(void) {
    long long n,p=1,first,last,middle,res;
 scanf("%lld",&n);
 if(n>=-9&&n<=9){
printf("%lld\n",n);
return 0;
}
 if(n<0)n=-n;
 last=n%10;
 while(n/p>=10)p*=10;
 first=n/p;
 middle=(n%p)/10;
 res=last*p+middle*10+first;
 printf("%lld\n",res);
    return 0;
}
