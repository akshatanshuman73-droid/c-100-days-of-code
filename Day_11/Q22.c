/*
Write a program to find profit or loss percentage given cost price and selling price.
*/

#include <stdio.h>
int main(void) {
    double cp,sp,p;
 scanf("%lf%lf",&cp,&sp);
 if(cp<=0){
puts("Invalid cost price");
}
 else if(sp>cp){
p=(sp-cp)*100/cp;
 printf("Profit %.2g%%\n",p);
}
 else if(sp<cp){
p=(cp-sp)*100/cp;
 printf("Loss %.2g%%\n",p);
}
 else puts("No Profit No Loss");
    return 0;
}
