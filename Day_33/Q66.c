/*
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>
int main(void) {
    int n,a[101],x,i,pos;
scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d",&x);
pos=n;
for(i=0;
i<n;
i++)if(x<=a[i]){
pos=i;
break;
}
for(i=n;
i>pos;
i--)a[i]=a[i-1];
a[pos]=x;
n++;
for(i=0;
i<n;
i++)printf("%d%s",a[i],i==n-1?"\n":" ");
    return 0;
}
