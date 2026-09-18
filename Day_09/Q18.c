/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include <stdio.h>
int main(void) {
    int p;
 scanf("%d",&p);
 if(p<0||p>100) puts("Invalid percentage");
 else if(p>=90) puts("Grade A");
 else if(p>=80) puts("Grade B");
 else if(p>=70) puts("Grade C");
 else if(p>=60) puts("Grade D");
 else puts("Grade F");
    return 0;
}
