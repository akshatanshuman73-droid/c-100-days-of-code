/*
Read and print elements of a one-dimensional array.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i;
 scanf("%d",&n);
 for(i=0;
i<n;
i++)scanf("%d",&a[i]);
 for(i=0;
i<n;
i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
