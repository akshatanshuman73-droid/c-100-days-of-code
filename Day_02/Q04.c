/*
Write a program to calculate the area and circumference of a circle given its radius.
*/

#include <stdio.h>
int main(void) {
    double r;
 const double pi=3.141592653589793;
 scanf("%lf",&r);
 printf("Area=%.2f, Circumference=%.2f\n",pi*r*r,2*pi*r);
    return 0;
}
