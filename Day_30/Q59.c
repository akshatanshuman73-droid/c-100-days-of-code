/*
Count even and odd numbers in an array.
*/

#include <stdio.h>
int main(void) {
    int n,a[100],i,e=0,o=0;
 scanf("%d",&n);
 for(i=0;
i<n;
i++){
scanf("%d",&a[i]);
if(a[i]%2)e++;
else o++;
}
 printf("Even=%d, Odd=%d\n",e,o);
    return 0;
}
