/*
Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>
int main(void) {
    int n,t,digits=0,sum=0,x,i,p;
 scanf("%d",&n);
 t=n;
 x=n;
 do{
digits++;
x/=10;
}
while(x);
 x=n;
 do{
int d=x%10;
p=1;
for(i=0;
i<digits;
i++)p*=d;
sum+=p;
x/=10;
}
while(x);
 puts(sum==t?"Armstrong":"Not Armstrong");
    return 0;
}
