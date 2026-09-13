/*
Rotate an array to the right by k positions.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],b[100],k,i;
scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d",&k);
if(n==0)return 0;
k=((k%n)+n)%n;
for(i=0;
i<n;
i++)b[(i+k)%n]=a[i];
for(i=0;
i<n;
i++)printf("%d%s",b[i],i==n-1?"\n":" ");
    return 0;
}
