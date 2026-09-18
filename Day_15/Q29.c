/*
Write a program to calculate the factorial of a number.
*/

#include <stdio.h>
int main(void) {
    int n,i;
 unsigned long long f=1;
 scanf("%d",&n);
 for(i=2;
i<=n;
i++)f*=i;
 printf("%llu\n",f);
    return 0;
}
