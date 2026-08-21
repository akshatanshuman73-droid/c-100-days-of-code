/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include <stdio.h>
int main(void) {
    int d,f;
 scanf("%d",&d);
 if(d>30) puts("Membership Cancelled");
 else {
f=d<=5?2*d:d<=10?10+4*(d-5):30+6*(d-10);
 printf("Fine Rs %d\n",f);
}
    return 0;
}
