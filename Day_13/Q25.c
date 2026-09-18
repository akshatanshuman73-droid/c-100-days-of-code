/*
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/

#include <stdio.h>
int main(void) {
    int a,b;
 char op;
 scanf("%d%d %c",&a,&b,&op);
 switch(op){
case '+':printf("%d\n",a+b);
break;
case '-':printf("%d\n",a-b);
break;
case '*':printf("%d\n",a*b);
break;
case '/':if(b)printf("%d\n",a/b);
else puts("Division by zero");
break;
case '%':if(b)printf("%d\n",a%b);
else puts("Division by zero");
break;
default:puts("Invalid operator");
}
    return 0;
}
