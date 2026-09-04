/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
int main(void) {
    int rows[]={
1,3,5,3,1}
,i,j;
 for(i=0;
i<5;
i++){
for(j=0;
j<rows[i];
j++)puts("*");
 if(i<4)putchar('\n');
}
    return 0;
}
