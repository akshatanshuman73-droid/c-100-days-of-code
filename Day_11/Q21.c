/*
Write a program to display the month name and number of days using switch-case for a given month number.
*/

#include <stdio.h>
int main(void) {
    int m;
 scanf("%d",&m);
 const char *n[]={
"","January","February","March","April","May","June","July","August","September","October","November","December"}
;
 int d[]={
0,31,28,31,30,31,30,31,31,30,31,30,31}
;
 if(m>=1&&m<=12) printf("%s, %d days\n",n[m],d[m]);
 else puts("Invalid month");
    return 0;
}
