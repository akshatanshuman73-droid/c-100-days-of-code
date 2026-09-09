/*
Search for an element in an array using linear search.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i,x;
 scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d",&x);
for(i=0;
i<n;
i++)if(a[i]==x){
printf("Found at index %d\n",i);
return 0;
}
puts("-1");
    return 0;
}
