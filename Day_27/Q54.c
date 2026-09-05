/*
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>
int main(void) {
    int i,j,n;
 for(i=1;
i<=4;
i++){
for(j=0;
j<4-i;
j++)putchar(' ');
n=2*i-1;
for(j=0;
j<n;
j++)putchar('*');
putchar('\n');
}
 for(i=3;
i>=1;
i--){
for(j=0;
j<4-i;
j++)putchar(' ');
n=2*i-1;
for(j=0;
j<n;
j++)putchar('*');
putchar('\n');
}
    return 0;
}
