/*
Write a program to display the day of the week based on a number (1–7) using switch-case.
*/

#include <stdio.h>
int main(void) {
    int n;
 scanf("%d",&n);
 const char *d[]={
"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}
;
 if(n>=1&&n<=7) puts(d[n]);
 else puts("Invalid day");
    return 0;
}
