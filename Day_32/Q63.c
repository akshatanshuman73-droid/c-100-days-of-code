/*
Merge two arrays.
*/

#include <stdio.h>
int main(void) {
    int n,m,a[200],i;
 scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;
i<m;
i++)scanf("%d",&a[n+i]);
for(i=0;
i<n+m;
i++)printf("%d%s",a[i],i==n+m-1?"\n":" ");
    return 0;
}
