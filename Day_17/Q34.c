/*
Write a program to check if a number is prime.
*/

#include <stdio.h>
int main(void) {
    int n,i,prime=1;
 scanf("%d",&n);
 if(n<2)prime=0;
 for(i=2;
i*i<=n;
i++)if(n%i==0){
prime=0;
break;
}
 puts(prime?"Prime":"Not prime");
    return 0;
}
