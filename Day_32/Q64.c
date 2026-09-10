/*
Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>
int main(void) {
    long long n;
 int c[10]={
0}
,d,i,best=0;
 scanf("%lld",&n);
if(n<0)n=-n;
if(n==0)c[0]=1;
while(n){
d=n%10;
c[d]++;
n/=10;
}
for(i=1;
i<10;
i++)if(c[i]>c[best])best=i;
printf("%d\n",best);
    return 0;
}
