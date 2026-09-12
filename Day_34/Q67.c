/*
Insert an element in an array at a given position.
*/

#include <stdio.h>
int main(void) {
    int n,a[101],x,pos,i;
scanf("%d",&n);
for(i=0;
i<n;
i++)scanf("%d",&a[i]);
scanf("%d%d",&x,&pos);
if(pos<0||pos>n){
puts("Invalid position");
return 0;
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
