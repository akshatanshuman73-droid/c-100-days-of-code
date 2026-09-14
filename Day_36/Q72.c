/*
Find the sum of all elements in a matrix.
*/

#include <stdio.h>
int main(void) {
    int r,c,a[20][20],i,j;
long long s=0;
scanf("%d%d",&r,&c);
for(i=0;
i<r;
i++)for(j=0;
j<c;
j++){
scanf("%d",&a[i][j]);
s+=a[i][j];
}
printf("%lld\n",s);
    return 0;
}
