/*
Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>
int main(void) {
    int a,b,t;
 scanf("%d%d",&a,&b);
 t=a;
a=b;
b=t;
 printf("After swap: %d %d\n",a,b);
    return 0;
}
