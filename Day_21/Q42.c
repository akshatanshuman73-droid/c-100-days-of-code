/*
Write a program to check if a number is a perfect number.
*/

#include <stdio.h>
int main(void) {
    int n,i,sum=0;
 scanf("%d",&n);
 for(i=1;
i<=n/2;
i++)if(n%i==0)sum+=i;
 puts(n>0&&sum==n?"Perfect number":"Not perfect number");
    return 0;
}
