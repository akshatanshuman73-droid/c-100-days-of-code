/*
Write a program to input an integer and check whether it is even or odd using if–else.
*/

#include <stdio.h>
int main(void) {
    int n;
 scanf("%d",&n);
 printf("%d is %s\n",n,n%2?"odd":"even");
    return 0;
}
