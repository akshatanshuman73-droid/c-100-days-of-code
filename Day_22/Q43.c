/*
Write a program to check if a number is a strong number.
*/

#include <stdio.h>
int main(void) {
    int n,t,sum=0,d,i,f;
 scanf("%d",&n);
 t=n;
 while(t){
d=t%10;
f=1;
for(i=2;
i<=d;
i++)f*=i;
sum+=f;
t/=10;
}
 puts(sum==n?"Strong number":"Not strong number");
    return 0;
}
