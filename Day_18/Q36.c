/*
Write a program to find the HCF (GCD) of two numbers.
*/

#include <stdio.h>
int main(void) {
    int a,b,t;
 scanf("%d%d",&a,&b);
 while(b){
t=a%b;
a=b;
b=t;
}
 if(a<0)a=-a;
 printf("%d\n",a);
    return 0;
}
