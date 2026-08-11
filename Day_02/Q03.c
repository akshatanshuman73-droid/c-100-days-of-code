/*
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>
int main(void) {
    double l,b;
 scanf("%lf%lf",&l,&b);
 printf("Area=%.0f, Perimeter=%.0f\n",l*b,2*(l+b));
    return 0;
}
