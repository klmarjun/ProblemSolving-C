//Return Without Argument
#include<stdio.h>
 int add();
 void main()
 {
    printf("\nTotal : %d",add());
 }
 int add()
 {
    int num1,num2;
    printf("Enter Two Numbers:");
    scanf("%d%d",&num1,&num2);
    return num1+num2 ;
 }