/*
Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>
int main(void) {
    int r,c,a[20][20],sum[20]={
0}
,i,j;
scanf("%d%d",&r,&c);
for(i=0;
i<r;
i++)for(j=0;
j<c;
j++){
scanf("%d",&a[i][j]);
sum[i]+=a[i][j];
}
for(i=0;
i<r;
i++)printf("%d%s",sum[i],i==r-1?"\n":" ");
    return 0;
}
