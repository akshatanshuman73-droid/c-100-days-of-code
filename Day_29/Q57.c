/*
Find the sum of array elements.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i;
 long long s=0;
 scanf("%d",&n);
 for(i=0;
i<n;
i++){
scanf("%d",&a[i]);
s+=a[i];
}
 printf("%lld\n",s);
    return 0;
}
