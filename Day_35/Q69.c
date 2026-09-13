/*
Find the second largest element in an array.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i,largest,second,has=0;
scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
largest=a[0];
for(i=1;
i<n;
i++)if(a[i]>largest)largest=a[i];
for(i=0;
i<n;
i++)if(a[i]!=largest&&(!has||a[i]>second)){
second=a[i];
has=1;
}
if(has)printf("%d\n",second);
else puts("No second largest element");
    return 0;
}
