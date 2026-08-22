/*
Write a program to print numbers from 1 to n.
*/

#include <stdio.h>
int main(void) {
    int n,i;
 scanf("%d",&n);
 for(i=1;
i<=n;
i++) printf("%d%s",i,i==n?"\n":" ");
    return 0;
}
