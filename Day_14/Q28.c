/*
Write a program to print the product of even numbers from 1 to n.
*/

#include <stdio.h>
int main(void) {
    int n,i;
 long long p=1;
 scanf("%d",&n);
 for(i=2;
i<=n;
i+=2)p*=i;
 printf("%lld\n",p);
    return 0;
}
