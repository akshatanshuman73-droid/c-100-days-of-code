/*
Write a program to input three numbers and find the largest among them using if–else.
*/

#include <stdio.h>
int main(void) {
    double a,b,c,m;
 scanf("%lf%lf%lf",&a,&b,&c);
 m=a>b?a:b;
 if(c>m)m=c;
 printf("Largest is %.10g\n",m);
    return 0;
}
