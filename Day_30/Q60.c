/*
Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i,p=0,neg=0,z=0;
 scanf("%d",&n);
 for(i=0;
i<n;
i++){
scanf("%d",&a[i]);
if(a[i]>0)p++;
else if(a[i]<0)neg++;
else z++;
}
 printf("Positive=%d, Negative=%d, Zero=%d\n",p,neg,z);
    return 0;
}
