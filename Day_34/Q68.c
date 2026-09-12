/*
Delete an element from an array.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],x,i,j,found=0;
scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d",&x);
for(i=0;
i<n;
i++)if(a[i]==x){
for(j=i;
j<n-1;
j++)a[j]=a[j+1];
n--;
found=1;
break;
}
if(!found){
puts("Element not found");
return 0;
}
for(i=0;
i<n;
i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
