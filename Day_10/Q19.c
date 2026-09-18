/*
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/

#include <stdio.h>
int main(void) {
    double a,b,c;
 scanf("%lf%lf%lf",&a,&b,&c);
 if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a) puts("Invalid triangle");
 else if(a==b&&b==c) puts("Equilateral");
 else if(a==b||b==c||a==c) puts("Isosceles");
 else puts("Scalene");
    return 0;
}
